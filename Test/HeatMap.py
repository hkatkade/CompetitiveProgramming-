import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from datetime import date


m = [' ', 'January', 'February', 'March', 'April', 'May', 'June',
     'July', 'August', 'September', 'October', 'November', 'December']
df = pd.read_csv('3131.csv')

df['datetime'] = pd.to_datetime(df['datetime'])
df['month'] = df['datetime'].dt.month
df['year'] = df['datetime'].dt.year
#df['month']=[m[i] for i in df['month']]


res = df.groupby(['year', 'month'])
open = pd.DataFrame(res['open'].apply(lambda x: x.iloc[0]).reset_index())
close = pd.DataFrame(res['close'].apply(lambda x: x.iloc[-1]).reset_index())


OCdf = pd.merge(open, close, how='left', on=['year', 'month'])
OCdf['returns'] = 100*(OCdf['close']-OCdf['open'])/OCdf['open']
OCdf.drop(['open', 'close'], axis=1, inplace=True)
df['year'] = df.index
OCdf = OCdf.pivot(index='year', columns='month', values='returns')
OCdf.columns = ['January', 'February', 'March', 'April', 'May', 'June',
                'July', 'August', 'September', 'October', 'November', 'December']


def colo(val):
    if val < 0:
        col = 'red'
    else:
        col = 'green'
    return 'background-color: %s' % col


result = OCdf.style.applymap(colo).set_precision(2)
fig, ax = plt.subplots(figsize=(40, 40))
sns.heatmap(OCdf, annot=OCdf, vmax=10, vmin=-10, square=True,
            cmap='RdYlGn', linewidth=0.3, annot_kws={"fontsize": 10})
ax.xaxis.tick_top()
title = 'Banknifty monthly returns Heatmap'
plt.title(title, loc='center', fontsize=18)
plt.show()

import pandas as pd
import matplotlib.pyplot as plt

data={
    'a':1002.1,
    'b':1233.3,
    'c':1032.8,
    'd':3002.2,
    'e':2332.2
}

df=pd.DataFrame(data,index=['2021'])

l=df.iloc[0].to_list()
a=['a','b','c','d','e']

plt.bar(a,l)
plt.show()




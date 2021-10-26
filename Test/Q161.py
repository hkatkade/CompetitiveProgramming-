import pandas as pd
import matplotlib.pyplot as plt

df=pd.read_csv('datafile1.csv')

y=df['YEAR']
a=df['ANNUAL - MIN']
b=df['ANNUAL - MAX']

plt.hist(a,bins=20)


plt.show()
import pandas as pd
import matplotlib.pyplot as plt

df=pd.read_csv('datafile1.csv')

y=df['YEAR']
a=df['ANNUAL - MIN']
b=df['ANNUAL - MAX']


plt.figure(figsize=(8,6))
plt.hist(a, bins=100, alpha=0.5, label="data1")
plt.hist(b, bins=100, alpha=0.5, label="data2")

plt.show()
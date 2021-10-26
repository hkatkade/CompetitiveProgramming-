import pandas as pd
import random

data={
    'City':['a','b','c','d'],
    'Population':[random.randrange(1, 1000, 1) for i in range(4)],
    'Income':[random.randrange(1, 100000, 1) for i in range(4)],
}

df=pd.DataFrame(data)

df['Income per capital']=df['Income']/df['Population']


print(df)
print(df.ndim)
print(df.shape)
print(df.size)
print(df.values)
print(df.index)
print(df.empty)
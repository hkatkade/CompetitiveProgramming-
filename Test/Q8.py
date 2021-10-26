import pandas as pd
import random


data={
    'Name':['a','a','a','a','a','a','a','a','a','a'],
    'Price':[random.randrange(1, 100, 1) for i in range(10)],
    'Quantity':[random.randrange(1, 10, 1) for i in range(10)],
    'Discount':[random.randrange(1, 50, 1) for i in range(10)]  
}

df=pd.DataFrame(data)

print(df.iloc[2])
print(df.loc[df['Price']>50])
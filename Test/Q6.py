import pandas as pd
import random

data = {
        'Math':[random.randrange(1, 100, 1) for i in range(30)],
        'Physics':[random.randrange(1, 100, 1) for i in range(30)],
        'Chemistry':[random.randrange(1, 100, 1) for i in range(30)],
        'CS':[random.randrange(1, 100, 1) for i in range(30)],
        'English':[random.randrange(1, 100, 1) for i in range(30)]
        }
# 1. create dataframe
df=pd.DataFrame(data)
print(df)

# 2. Print rows
for i in range(len(df)):
    print(df.iloc[i])
    
#  3. print columns data
for (columnName, columnData) in df.iteritems():
    print('Subject : ', columnName)
    print('Marks : ', columnData.values)
    
# 4. perform boolean indexing
df1=df>90
print(df1)

# 5. print head
print(df.head())

# 6. print tail
print(df.tail())

# 7. displaying results and drop duplicates
df=df.drop_duplicates()
df['Score'] = df.sum(axis=1)
print(df)
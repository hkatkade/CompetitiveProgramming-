import pandas as pd
import numpy as np

# Take input
l=list(map(int,input("Enter percentiles of students: ").split()))

# create a series and print elements greater than 75
ans=[i for i in l if i>75]
ans=pd.Series(ans,name='Percentiles')
print(ans)

# Apply series attribtues
print(ans.name)
print(ans.index)
print(ans.size)
print(ans.values)
print(ans.empty)


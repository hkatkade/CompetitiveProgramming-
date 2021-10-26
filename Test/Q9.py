import pandas as pd


data = {
        '2018':[110, 130, 115, 118],
        '2019':[205, 165, 206, 198],
        '2020':[177, 175, 157, 183],
        '2021':[189, 190, 183, 169]
        }

# 1. create a dataframe
sales=pd.DataFrame(data,index=['Kapil', 'Kamini', 'Shikhar', 'Mohini'])
# sales.set_index('Index',inplace=True)

# 2. Display row labels
print(sales.index)

# 3.Display column labels
print(sales.columns)

# 4. datatype of each column of sales
print(sales.dtypes)

# 5. Display dimensions, shape, size and values of sales
print(sales.ndim)
print(sales.shape)
print(sales.size)

# 6. Display last two rows
print(sales.iloc[-1])
print(sales.iloc[-2])

# 7. Display first two columns
print(sales['2018'])
print(sales['2019'])

# 8. Transpose of dataframe
sales=sales.transpose()
print(sales)

# 9. Display sales made by all 
for (columnName, columnData) in sales.iteritems():
    print('Name : ', columnName)
    print('Sales made : ', columnData.values)
    
# 10. Sales made by kapil and mohini in 2019,2020
print(sales['Kapil']['2019'])
print(sales['Mohini']['2020'])

# 11. add data
sales['Nirali']=[221,178,165,177]
print(sales)

# 12. delete 2018
salesT=sales.drop('2018')
print(salesT)

# 13. Delete shikhar
sales=sales.drop(['Shikhar'], axis = 1)
print(sales)

# 14. Change the name
sales.rename(columns = {'Kamini':'Rani','Kapil':'Anil'}, inplace = True)
print(sales)

# 15. update
sales['Mohini']['2018']=150


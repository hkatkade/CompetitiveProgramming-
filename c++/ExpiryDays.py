import pandas as pd
import datetime
import calendar

df = pd.read_csv('3131.csv')
l = df['datetime'][::]


def findDay(date):
    day = datetime.datetime.strptime(date, '%Y-%m-%d').weekday()
    return (calendar.day_name[day])


d = {'Monday': 1, 'Tuesday': 2, 'Wednesday': 3, 'Thursday': 4, 'Friday': 5}

ans = []
for i in range(len(l)-1):
    one = findDay(l[i])
    two = findDay(l[i+1])
    if one == 'Saturday' or two == 'Saturday' or one == 'Sunday' or two == 'Sunday':
        continue
    if d[one] == 4:
        ans.append({l[i], one})
    elif abs(d[one]-d[two]) != 1 and d[two] > 4 and d[one] < 4:
        ans.append({l[i], one})

print(ans)

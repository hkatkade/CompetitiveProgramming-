import matplotlib.pyplot as plt


months=["January","February","March","April","May","June"]
views=[2500,2100,1700,2500,3000,3800]

plt.title('YouTube stats')
plt.xlabel('Months')
plt.ylabel('Views')

plt.plot(months,views,'--',c='r',lw=5,label="Views",marker='o',markerfacecolor='black',markeredgecolor='blue')

plt.legend()
plt.show()

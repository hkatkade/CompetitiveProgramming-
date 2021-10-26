import matplotlib.pyplot as plt
import random

math=[random.randrange(1, 100, 1) for i in range(100)]
CS=[random.randrange(1, 100, 1) for i in range(100)]
physics=[random.randrange(1, 100, 1) for i in range(100)]

fig, ax = plt.subplots(figsize=(100,10))

ax.plot(math, color = 'green', label = 'Math')
ax.plot(CS, color = 'red', label = 'CS')
ax.plot(physics, color = 'blue', label = 'Physics')
ax.legend(loc = 'upper left')

plt.show()

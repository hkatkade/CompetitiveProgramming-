import pandas as pd
import matplotlib.pyplot as plt
import random

h=[random.randrange(150, 200, 1) for i in range(50)]
w=[random.randrange(1, 100, 1) for i in range(4)]

plt.figure(figsize=(8,6))
plt.hist(h, bins=10, alpha=0.5, label="Heights")
plt.hist(w, bins=10, alpha=0.5, label="Weights")
plt.show()
import numpy as num
import matplotlib.pyplot as plt

dpython = ('times_python.csv')
dcpp = ('times_cpp')

x1 = dpython[:,1]
y1 = dpython[:,0]
x2 = dcpp[:,1]
y2 = dcpp[:,0]

plt.figure()
plt.plot(x1, y1)
plt.plot(x2, y2)
plt.xlabel("Tiempo")
plt.ylabel("N")
plt.title("Tiempo vs N")
plt.savefig("cpp_vs_python.png")

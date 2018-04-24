import numpy as np
import matplotlib.pyplot as plt
p=699

x0=np.genfromtxt("dats.txt",usecols=(0))[0:p]
y0=np.genfromtxt("dats.txt",usecols=(1))[0:p]
x1=np.genfromtxt("dats.txt",usecols=(0))[p+1:2*p +1]
y1=np.genfromtxt("dats.txt",usecols=(1))[p+1:2*p +1]
x2=np.genfromtxt("dats.txt",usecols=(0))[2*p+2:3*p +2]
y2=np.genfromtxt("dats.txt",usecols=(1))[2*p+2:3*p +2]
x3=np.genfromtxt("dats.txt",usecols=(0))[3*p+3:4*p +3]
y3=np.genfromtxt("dats.txt",usecols=(1))[3*p+3:4*p +3]
x4=np.genfromtxt("dats.txt",usecols=(0))[4*p+3:5*p +4]
y4=np.genfromtxt("dats.txt",usecols=(1))[4*p+3:5*p +4]

plt.plot(x0,y0)
plt.plot(x1,y1)
plt.plot(x2,y2)
plt.plot(x3,y3)
plt.plot(x4,y4)

plt.savefig("graph.png")

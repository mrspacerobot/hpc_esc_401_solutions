#!/usr/bin/env python
import re, sys
import matplotlib.pyplot as plt
import numpy as np
x=[100,500,1000,5000,10000,20000,50000]
y=[]
for line in re.finditer(
    r"Duration = ([0-9].[0-9]+e[+,-][0-9]+) s",
    sys.stdin.read(), re.MULTILINE):
    y.append(float(line.group(1)))
    print("{}".format(line.group(1)))

x = np.array(x)
y = np.array(y)

xx = np.arange(0,50000,10)
yfit = xx**2.0 * y[-1] / x[-1]**2.0

plt.plot(xx,yfit,label='fit')
plt.plot(x,y,label='data',marker='x',linestyle='None')
plt.gca().set_xscale('linear')
plt.gca().set_yscale('linear')
plt.xlabel('N')
plt.ylabel('Runtime [s]')

plt.legend()
plt.savefig('speedup.png',dpi=350)

#talked to francisco ramirez

from turtle import *

def base(n,sideLength,cycles):
    angle = 360/n
    if cycles == 0:
        return
    else:
        forward(sideLength)
        left(angle)
        base(n,sideLength,cycles-1)

def regularNGon(n, sideLength):
    return base(n,sideLength,n)


def archSpiral(initialLen, increment, angle, n):
    if n == 0:
        return
    else:
        forward(initialLen)
        left(angle)
        archSpiral(initialLen + increment, increment,angle, n-1)

def logSpiral(initialLen, percentIncrease, angle, n):
    if n == 0:
        return
    else:
        forward(initialLen)
        left(angle)
        initialLen = initialLen *(1+(percentIncrease/100))
        return logSpiral(initialLen, percentIncrease, angle, n-1)


from math import sqrt

def ok(x):
    stp = int(sqrt(x))+1
    for i in range(2,stp):
        if ( x%i==0 ):
            return False
    return True
sum = 0
for i in range(2,2000000):
    if (ok(i)):
        sum+=i
print sum

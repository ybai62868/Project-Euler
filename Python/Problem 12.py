from math import sqrt

def tri(n):
    return (1 + n) * n / 2

n = 0
counter = 0
while counter <= 500:
    counter = 1
    n += 1
    for i in range(1,int(sqrt(tri(n)))+1):
        if not tri(n) % i:
            counter += 2
    if int(sqrt(tri(n))) == sqrt(tri(n)):
        counter = counter - 1
    #print counter

print n,tri(n)

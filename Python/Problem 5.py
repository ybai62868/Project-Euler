from math import sqrt

myPrime = [n for n in xrange(2,21) if 0 not in [n % i for i in xrange(2,int(sqrt(n))+1)]]

result = 1
for i in myPrime:
    j = 1
    while i ** j <= 20:
        j += 1
    result = result * i ** (j - 1)
print result

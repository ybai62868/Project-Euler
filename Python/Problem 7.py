from math import sqrt
def ok(x):
    stp = int(sqrt(x))+1
    for i in range(2,stp,1):
        if ( x%i==0 ):
            return 0
    return 1
i = 1
cnt = 0
while ( cnt<10001 ):
    i+=1
    if ( ok(i) ):
        cnt+=1
print i

def eula( x ):
    i = 2
    while x!=1:
        if x%i==0:
            x/=i
            maxprime = i
        else:
            i+=1
    return maxprime
print eula(600851475143)

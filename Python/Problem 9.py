for i in range(1,1000,1):
    for j in range(i+1,1000,1):
        for k in range(j+1,1000,1):
            if ( i**2+j**2==k**2 and i+j+k==1000 ):
                print i*j*k


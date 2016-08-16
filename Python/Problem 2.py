ans = 2
a1 = 1
a2 = 2
while(1):
    value = a1+a2
    if value > 4000000:
        break
    if value&1==0:
        ans+=value
    a1 = a2
    a2  = value
print ans

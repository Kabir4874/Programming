def convert(k,v):
    return {x:y for x,y in zip(k,v)}
    


k=[1001,1002,1003,1004,1005]
v=['USA','Canada','China','Japan','UK']
dec= convert(k,v)
print(dec)
def is_prime(number):
    flag= False
    if(number<=1):
        flag=False
    else:
        for i in range(2,number):
            if(number%i==0):
                flag=True
                break
    return flag


num= int(input())
x= is_prime(num)
if(x==False):
    print("Number is Prime")
else:
    print("Number is not Prime")
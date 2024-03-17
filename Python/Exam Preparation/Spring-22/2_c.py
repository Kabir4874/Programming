lis1=[]
lis2=[]

n=int(input("Enter the size of list:"))
for i in range(1,n+1):
    x=int(input())
    lis1.append(x)

if(n<2):
    print("Not Possible")
else:
    lis2=lis1[1:-1]

print(lis2)
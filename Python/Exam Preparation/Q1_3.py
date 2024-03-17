n= int(input("Enter the number of customers:"))
total=0
for i in range(1,n+1):
    k=int(input(f"Enter Age of Customer {i}:"))
    if(k<=12):
        total=total+5
    elif(k<=17):
        total=total+8
    elif(k<=64):
        total=total+12
    elif(k>=65):
        total=total+7

print(f"Total Cost is: {total}")
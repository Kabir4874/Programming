def payment(dic):
    for id,info in dic.items():
        amount=0
        plan= info['plan']
        if(plan=='basic'):
            amount=9.99
        elif(plan=='standard'):
            amount=15.99
        elif(plan=='premium'):
            amount=19.99

        info['payment']=amount

        print(f'Use {info['name']} with plan {plan} has to pay ${amount}.')




dic= {}
n= int(input("Enter the number of users:"))
for i in range(1,n+1):
    name= input(f"Enter name for user {i}:")
    plan= input(f"Enter plan for user {i}:")
    dic[i]={'name':name, 'plan':plan}

payment(dic)
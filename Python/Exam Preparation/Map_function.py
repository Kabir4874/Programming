def check(n):
    if(n%2==0):
        return (f'The number {n} is an Even number.')
    else:
        return (f'The number {n} is an Odd number.')

lis= [1,2,3,4,5,6,7,8,9,10]
temp= map(check,lis)
for i in temp:
    print(i)

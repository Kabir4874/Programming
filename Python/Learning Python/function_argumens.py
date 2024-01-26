# def average(a=9,b=2):
#     print("The average is ",(a+b)/2)
# average(1,5)

# def average(*numbers):
#     sum=0
#     for i in numbers:
#         sum=sum+i
#     print("Average is:", sum/len(numbers))

# average(5,6,7,1)


# from os import name


# def average(**name):
#     print("Hello", name["fname"], name["mname"],name["lname"])

# average(fname="Bacchan",mname="Barnes",lname="James")


def average(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i
    # print("Average is:", sum/len(numbers))
    return sum/len(numbers)

c=average(5,6,7,1)
print(c)
n= float(input("Enter Your CGPA:"))

if(n>3.50):
    print("Waiver is 20%")
elif(n>=3):
    print("Waiver is 10%")
elif(n<3):
    print("Waiver is 5%")
a= input("Enter the number: ")
print("Multiplication table of {a} is:")

try:
 for i in range(1,11):
    print(f"{a} X {i}={int(a)*i}")
except Exception as e:
 print(e)
print("Some lines of code")
print("End of program")
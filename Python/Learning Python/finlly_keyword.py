try:
    l=[1,5,6,7]
    i= int(input("Enter the index: "))
    print(l[i])
except:
    print("Some error occurred")
finally:
    print("i am always executed")
flour_bags= 10
sugar= 10
eggs=10
butter=10

print("Enter the amounts of each ingredient used of delivered:")

fb= int(input("Flour Bags:"))
s= int(input("Sugar:"))
e=int(input("Eggs:"))
b=int(input("Butter:"))

r_fg= flour_bags-fb
r_s= sugar-s
r_e= eggs-e
r_b= butter-b

if(r_fg>r_s and r_fg>r_e and r_fg>r_b):
    print(f"Maximum {r_fg} Flour Bags Remaining.")
elif(r_s>r_fg and r_s>r_e and r_s>r_b):
    print(f"Maximum {r_s} kg Sugar Remaining.")
elif(r_e>r_s and r_e>r_fg and r_e>r_b):
    print(f"Maximum {r_e} Eggs Remaining.")
elif(r_b>r_s and r_b>r_fg and r_b>r_e):
    print(f"Maximum {r_b} kg Butter Remaining.")
    
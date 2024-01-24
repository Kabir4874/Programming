x=8
match x:
    case 0:
        print("X is 0")
    case 4:
        print("Case is 4")
    case _ if x!=90:
        print(x, "is not 90")
    case _:
        print(x)
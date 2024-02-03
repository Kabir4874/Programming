from os import name
class Person:
    def __init__(self,n,o):
        self.name= n
        self.occ= o
    # name= "Harry"
    # occ="Developer"

    def info(self):
        print(f"{self.name} is a {self.occ}")

a= Person("Harry","Developer")
b= Person("Divya", "HR")
# print(a.name)
# a.name= "Divya"
# a.occ="HR"
a.info() 
b.info()
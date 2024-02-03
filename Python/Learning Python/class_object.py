class Person:
    name= "Kabir"
    occupation= "Student"
    netWorth= 10
    def info(self):
        print(f"{self.name} is a {self.occupation}")

a= Person()
a.name="Kabir Ahmed Ridoy"
print(a.name)
a.info()
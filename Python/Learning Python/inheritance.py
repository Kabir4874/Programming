class Employee:
    def __init__(self,name,id):
        self.name= name
        self.id= id

    def showDetails(self):
        print(f"The name of Employee: {self.name} and Id is: {self.id}")

class Programmer(Employee):
    def showLanguage(self):
        print("The default language is Python")


e= Employee("Kabir",4874)
e.showDetails()

p= Programmer("Kabir","4874")
p.showLanguage()
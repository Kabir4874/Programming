class ParentClass:
    def parent_method(self):
        print("This is the parent method")

class ChildClass(ParentClass):
    def child_method(self):
        print("This is the child method")
        super().parent_method()


child_obj= ChildClass()
child_obj.child_method()
def greet(fx):
    def mfx(*args, **kwargs):
        print("Good morning")
        fx(*args,*kwargs)
        print("Thanks for using this function")
    return mfx

@greet
def add(a,b):
    print(a+b)

@greet
def hello():
    print("Hello World")


hello()
add(2,3)
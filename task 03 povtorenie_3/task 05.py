a = int(input("Enter a: "))
b = int(input("Enter b: "))

def NOD(a, b):
    while a != 0 and b != 0:
        if a > b:
            a %= b
        else:
            b %= a
    return a + b

def NOK(a, b):
    return (a * b) // NOD(a, b)

print("NOK:", NOK(a, b))

'''
    If the three sides of a triangle are entered through the keyboard,
    write a program to check whether the triangle is
    isosceles, equilateral, scalene or right angle triangle.
'''


def trangleValidation(num1: int, num2: int, num3: int) -> bool:
    if (num1 + num2 + num3) <= 180:
        return True
    else:
        return False


def trainageCheck(base: int, perpendicular: int, hypotenuse: int):
    if base == perpendicular == hypotenuse:
        print("Its an equilateral triangle")
    elif (base == perpendicular) or (base == hypotenuse) or (perpendicular == hypotenuse):
        print("Its an  isosceles triangle")
        if ((base ** 2) + (perpendicular ** 2)) == (hypotenuse ** 2):
            print("Its also right angle triangle")
    elif base != perpendicular != hypotenuse:
        print("Its an scalene triangle")
        if ((base ** 2) + (perpendicular ** 2)) == (hypotenuse ** 2):
            print("Its also right angle triangle")
    elif ((base ** 2) + (perpendicular ** 2)) == (hypotenuse ** 2):
        print("Its an right angle triangle")


b = eval(input("Enter the base length:"))
p = eval(input("Enter the perpendicular length:"))
h = eval(input("Enter the hypotenuse length :"))

if trangleValidation(b,p,h):
    trainageCheck(b,p,h)
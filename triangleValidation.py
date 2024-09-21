'''
    Write a program to check whether a triangle is valid or not,
     when the three angles of the triangle are entered through the keyboard.
      A triangle is valid if the sum of all the three angles is equal to 180 degrees.
'''


def trangleVal(num1: int, num2: int, num3: int) -> bool:
    if (num1 + num2 + num3) == 180:
        return True
    else:
        return False


angleA = int(input("Enter angle A : "))
angleB = int(input("Enter angle B : "))
angleC = int(input("Enter angle C : "))

if trangleVal(angleA, angleB, angleC):
    print("Its an Triangle")
else:
    print("Not an triangle as the sum of the \ninternal angles is more tha 180 degree")
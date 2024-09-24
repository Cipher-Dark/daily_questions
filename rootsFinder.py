'''
    Write a program to find the roots of a quadratic equations using switch/match case.
'''
import  math
def calRoot(a:int, b:int, c:int):
    d= (b * b - 4 * a * c)
    sqrtVal = math.sqrt(abs(d))
    z = -1 if d < 0 else (1 if d >0 else 0)
    match(d):
        case 0:
            print("real and same roots")
            print(-b / (2 * a))
        case 1:
            print("real and different roots")
            print((-b + sqrtVal) / (2 * a))
            print((-b - sqrtVal) / (2 * a))
        case _:
            print("Complex Roots")
            print(- b / (2 * a), '+ i', sqrtVal / (2 * a))
            print(- b / (2 * a), '- i', sqrtVal / (2 * a))


calRoot(1,2,3)
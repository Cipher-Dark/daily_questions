'''A five digit number is entered through the keyboard.
Write a program to obtain the reversed number and
to determine whether the original and
reversed numbers are equal or not. '''


def reverseNumber(num: int) -> int:
    temp = num
    rev = 0
    while temp != 0:
        rem = temp % 10
        rev = (rev * 10) + rem
        temp = temp // 10
    return rev


def panlindromeNumber(num1: int, num2: int) -> bool:
    if (num1 == num2):
        return True
    else:
        return False


num = int(input("Enter an five digit number : "))
print(f"Reverse of {num} is {reverseNumber(num)}")
if panlindromeNumber(num, reverseNumber(num)):
    print("Number is Palindrome")
else:
    print(f"{num} and {reverseNumber(num)} are not same")

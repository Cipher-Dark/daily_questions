"""
    Any character is entered through the keyboard, write a program to
     determine whether the character entered is a capital letter,
     a small case letter, a digit or a special symbol.

    The following shows the range of ASCII values for various characters.

    A – Z                            65-90
    a – z                             97-122
    0 – 9                             48-57
    special symbols         0-47, 58 - 64, 91 - 96, 123 - 127
"""


def charCheckerUsingInbuildFunctions(char: str):
    char = char[0]
    if char.islower():
        print("Lower case")
    elif char.isupper():
        print("Upper case")
    elif char.isnumeric():
        print("Digit ")
    else:
        print("Special char")

def charCheck(char: str):
    char = ord(char[0])
    print(f'ASCII value is {char}')
    if 65 <= char <= 90:
        print("Upper Case")
    elif 97 <= char <= 112:
        print("Lower Case")
    elif 48 <= char <= 57:
        print("Digit ")
    else:
        print("Special Character")


# charCheckerUsingInbuildFunctions(input("Enter a character  : "))

charCheck(input("Enter a character "))

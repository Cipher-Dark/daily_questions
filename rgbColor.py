"""
    In digital would colors are specified kin Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mention Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0.
    Write a program that converts RGB color to CMYK color as per the following formulae:
    White = Max(Red/255, Green/255, Blue/255)
    Cyan = (White - Red / 255)/ White
    Magenta = (White - Green/255)/White
    Yellow = (White - Blue/255)/White
    Black = 1- White

    If the RGB values are all 0, then the CMY values are all 0 and the K value is 1.
    *
"""


def rgbToCMYK(red: int, green: int, blue: int):
    if (red + green + blue) > 0:
        white = max(red / 255, green / 255, blue / 255)
        cyan = (white - red / 255) / white
        magenta = (white - green / 255) / white
        yellow = (white - blue / 255) / white
        black = 1 - white
        return cyan, magenta, yellow, black
    else:
        return 0, 0, 0, 1


red = int(input("Enter the value of red : "))
green = int(input("Enter the value of green : "))
blue = int(input("Enter the value of blue : "))

c, m, y, k = rgbToCMYK(red, green, blue)

print(f"The colour format is Cyan ={c}, Magenda ={m}, Yellow ={y}, and Black ={k} ")

# Same functionality as calculator.c
from sys import argv
import math

maximum = 100

if len(argv) == 4:
    if argv[2] == "+":
        print(f"{int(argv[1]) + int(argv[3])}")
        exit(0)
    elif argv[2] == "-":
        print(f"{int(argv[1]) - int(argv[3])}")
        exit(0)
    elif argv[2] == "x":
        print(f"{int(argv[1]) * int(argv[3])}")
        exit(0)
    elif argv[2] == "/":
        print(f"{int(argv[1]) / int(argv[3])}")
        exit(0)
    else:
        print("Format: ./calculator x (operation) y")
        print("Also remember to put spaces in between arguments!")
        print("Please note that multiplication is noted with 'x' not '*'")
        print("Special functions: sq (number) for squaring, cb (number) for cubing, and sqrt (number) for square roots!")
        exit(1)
elif len(argv) == 3:
    if argv[1] == "sq":
        print(f"{int(argv[2]) ** 2}")
        exit(0)
    elif argv[1] == "cb":
        print(f"{int(argv[2]) ** 3}")
        exit(0)
    elif argv[1] == "sqrt":
        if int(argv[2]) >= 0:
            if int(argv[2]) < maximum:
                print(f"{math.sqrt(int(argv[2]))}")
                exit(0)
            else:
                print("Number too large to square root!")
else:
    print("Format: ./calculator x (operation) y")
    print("Also remember to put spaces in between arguments!")
    print("Please note that multiplication is noted with 'x' not '*'")
    print("Special functions: sq (number) for squaring, cb (number) for cubing, and sqrt (number) for square roots!")
    exit(1)

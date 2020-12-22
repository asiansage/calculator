// WHOLE NUMBER CALCULATOR 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

//Defines maximum for square root iteration
#define MAX 1000

//Define functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(int argc, string argv[])
{
    if (argc == 4)
    {
        // Addition
        if (strcmp(argv[2], "+") == 0 )
        {
            int add1 = atoi(argv[1]);
            int add2 = atoi(argv[3]);
            int solution = add(add1, add2);
            printf("%i\n", solution);
        }
        // Subtraction
        else if (strcmp(argv[2], "-") == 0 )
        {
            int subtract1 = atoi(argv[1]);
            int subtract2 = atoi(argv[3]);
            int solution = subtract(subtract1, subtract2);
            printf("%i\n", solution);
        }
        // Multiplication
        else if (strcmp(argv[2], "x") == 0 )
        {
            int mult1 = atoi(argv[1]);
            int mult2 = atoi(argv[3]);
            int solution = multiply(mult1, mult2);
            printf("%i\n", solution);
        }
        // Division
        else if (strcmp(argv[2], "/") == 0 )
        {
            int div1 = atoi(argv[1]);
            int div2 = atoi(argv[3]);
            int solution = divide(div1, div2);
            printf("%i\n", solution);
        }
    }
    else if (argc == 3)
    {
        // Squaring
        if (strcmp(argv[1], "sq") == 0)
        {
            int square = atoi(argv[2]);
            int squared = multiply(square, square);
            printf("%i\n", squared);
        }
        // Cubing
        else if (strcmp(argv[1], "cb") == 0)
        {
            int cube = atoi(argv[2]);
            int cubed1 = multiply(cube, cube);
            int cubed = multiply(cubed1, cube);
            printf("%i\n", cubed);
        }
        // Square root
        else if (strcmp(argv[1], "sqrt") == 0)
        {
            int j = 0;
            int root = atoi(argv[2]);
            for (int i = 1; i < MAX; i++)
            {
                j = j + 1;
                int rooted = multiply(j, j);
                if (rooted == root)
                {
                    printf("%i\n", j);
                    return 0;
                }
                else if (rooted == 1000000)
                {
                    printf("Too big!\n");
                    return 0;
                }
                else if (rooted > root)
                {
                    printf("Not a whole number root!\n");
                    return 0;
                }
            }
        }
        else
        {
            printf("Format: ./calculator x (operation) y\n");
            printf("Also remember to put spaces in between arguments!\n");
            printf("Please note that multiplication is noted with 'x' not '*'\n");
            printf("Special functions: sq (number) for squaring, cb (number) for cubing, and sqrt (number) for square roots!\n");
            return 0;
        }
    }
    else
    {
        printf("Format: ./calculator x (operation) y\n");
        printf("Also remember to put spaces in between arguments!\n");
        printf("Please note that multiplication is noted with 'x' not '*'\n");
        printf("Special functions: sq (number) for squaring, cb (number) for cubing, and sqrt (number) for square roots!\n");
        return 0;
    }
}

int add(int a, int b)
{
    int add = a + b;
    return add;
}

int subtract(int a, int b)
{
    int subtract = a - b;
    return subtract;
}

int multiply(int a, int b)
{
    int multiply = a * b;
    return multiply;
}

int divide(int a, int b)
{
    int divide = a / b;
    return divide;
}

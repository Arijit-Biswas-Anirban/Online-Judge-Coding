/*
/*
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

Input Sample	Output Sample
576

                    576
                    5 nota(s) de R$ 100,00
                    1 nota(s) de R$ 50,00
                    1 nota(s) de R$ 20,00
                    0 nota(s) de R$ 10,00
                    1 nota(s) de R$ 5,00
                    0 nota(s) de R$ 2,00
                    1 nota(s) de R$ 1,00

11257

                    11257
                    112 nota(s) de R$ 100,00
                    1 nota(s) de R$ 50,00
                    0 nota(s) de R$ 20,00
                    0 nota(s) de R$ 10,00
                    1 nota(s) de R$ 5,00
                    1 nota(s) de R$ 2,00
                    0 nota(s) de R$ 1,00

503

                    503
                    5 nota(s) de R$ 100,00
                    0 nota(s) de R$ 50,00
                    0 nota(s) de R$ 20,00
                    0 nota(s) de R$ 10,00
                    0 nota(s) de R$ 5,00
                    1 nota(s) de R$ 2,00
                    1 nota(s) de R$ 1,00
*/



#include <stdio.h>
int main()
{
    int amount;
    // printf("Enter the amount : ");
    scanf("%d", &amount);
    printf("%d\n", amount);
    int d100 = 0, d50 = 0, d20 = 0, d10 = 0, d5 = 0, d2 = 0, d1 = 0;

    while (amount != 0)
    {
        if (amount / 100 > 0)
        {
            d100 = amount / 100;
            amount = amount % 100;
        }
        else if (amount / 50 > 0)
        {
            d50 = amount / 50;
            amount = amount % 50;
        }
        else if (amount / 20 > 0)
        {
            d20 = amount / 20;
            amount = amount % 20;
        }
        else if (amount / 10 > 0)
        {
            d10 = amount / 10;
            amount = amount % 10;
        }
        else if (amount / 5)
        {
            d5 = amount / 5;
            amount = amount % 5;
        }
        else if (amount / 2 > 0)
        {
            d2 = amount / 2;
            amount = amount % 2;
        }
        else if (amount / 1 > 0)
        {
            d1 = amount / 1;
            amount = amount % 1;
        }
    }
    printf("%d nota(s) de R$ 100,00\n", d100);
    printf("%d nota(s) de R$ 50,00\n", d50);
    printf("%d nota(s) de R$ 20,00\n", d20);
    printf("%d nota(s) de R$ 10,00\n", d10);
    printf("%d nota(s) de R$ 5,00\n", d5);
    printf("%d nota(s) de R$ 2,00\n", d2);
    printf("%d nota(s) de R$ 1,00\n", d1);

    return 0;
}

// gcc 1018_prac.c -o 1018_prac && ./1018_prac
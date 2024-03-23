/*
Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

Input
The input file contains 1 integer value.

Output
Print the output, like the following example.

Input Sample	Output Sample
400

                1 ano(s)
                1 mes(es)
                5 dia(s)

800

                2 ano(s)
                2 mes(es)
                10 dia(s)

30

                0 ano(s)
                1 mes(es)
                0 dia(s)
*/

#include <stdio.h>
int main()
{
    int days, y = 0, m = 0, d = 0;
    scanf("%d", &days);

    while (days != 0)
    {
        if (days / 365 > 0)
        {
            y = days / 365;
            days = days % 365;
        }
        else if (days / 30 > 0)
        {
            m = days / 30;
            days = days % 30;
        }
        else if (days / 1 > 0)
        {
            d = days / 1;
            days = days % 1;
        }
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;
}
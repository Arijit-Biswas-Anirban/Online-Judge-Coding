/*
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Input Sample	Output Sample
556

                0:9:16

1

                0:0:1

140153

                38:55:53
*/


#include <stdio.h>
int main()
{
    int N, h = 0, m = 0, s = 0;
    // printf("Enter total seconds : ");
    scanf("%d", &N);

    while (N != 0)
    {
        if (N / 3600 > 0)
        {
            h = N / 3600;
            N = N % 3600;
        }
        else if (N / 60 > 0)
        {
            m = N / 60;
            N = N % 60;
        }
        else if (N / 1 > 0)
        {
            s = N / 1;
            N = N % 1;
        }
    }
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
// gcc 1019_Time_Conversion.c -o 1019_Time_Conversion && ./1019_Time_Conversion
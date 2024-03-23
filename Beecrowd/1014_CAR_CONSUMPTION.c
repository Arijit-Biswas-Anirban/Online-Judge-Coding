/*
Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

Input
The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

Output
Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".

Input Sample	Output Sample
500
35.0

                14.286 km/l

2254
124.4

                18.119 km/l

4554
464.6

                9.802 km/l
*/

#include <stdio.h>
int main()
{
    int x;
    float y;

    //printf("Enter km(x) and l(y) : ");
    scanf("%d%f", &x, &y);
    printf("%.3f km/l\n", x/y);


    return 0;
}

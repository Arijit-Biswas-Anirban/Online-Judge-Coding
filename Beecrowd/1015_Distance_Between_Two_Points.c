/*
Distance Between Two Points
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance = https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1015.png

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.

Input Sample	Output Sample
1.0 7.0
5.0 9.0

                    4.4721

-2.5 0.4
12.1 7.3

                    16.1484

2.5 -0.4
-12.2 7.0

                    16.4575
*/

#include <stdio.h>
#include <math.h>
int main()
{

    double x1,y1,p1;
    scanf("%lf%lf", &x1, &y1);   
    double x2,y2,p2;
    scanf(" %lf%lf", &x2, &y2);

    p1 = x2 - x1;
    p2 = y2 - y1;

    printf("%.4lf\n", sqrt((p1*p1) + (p2*p2)));

    return 0;
}

/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

Input Samples	Output Samples
3.0 4.0 5.2

                TRIANGULO: 7.800
                CIRCULO: 84.949
                TRAPEZIO: 18.200
                QUADRADO: 16.000
                RETANGULO: 12.000

12.7 10.4 15.2

                TRIANGULO: 96.520
                CIRCULO: 725.833
                TRAPEZIO: 175.560
                QUADRADO: 108.160
                RETANGULO: 132.080
*/

#include <stdio.h>
int main()
{
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    // printf("Enter A, B, C : ");
    scanf("%lf%lf%lf", &A, &B, &C);

    TRIANGULO = (1.0 / 2) * A * C;      // Use (1/2.0) or (1.0/2) in your formula, because some languages (including C & C++) assume that the division's result between two integers is another integer. :)
    CIRCULO = 3.14159 * C * C;
    TRAPEZIO = (1 / 2.0) * (A + B) * C;
    QUADRADO = B * B;
    RETANGULO = A * B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);

    return 0;
}

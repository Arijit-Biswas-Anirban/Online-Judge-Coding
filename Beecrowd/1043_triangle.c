#include<stdio.h>
int main()
{
    float a, b, c, P, A;
    scanf("%f %f %f", &a, &b, &c);
    P = a + b + c;
    A = (1.0 / 2) * (a+b) * c;
    if(a+b == c || b+c == a || a+c == b)
        printf("Area = %.1f\n", A);
    else
        printf("Perimetro = %.1f\n", P);


    return 0;
}

#include<stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double A,B,C;

    if(a>b && b>c)
    {
        A = a;
        B = b;
        C = c;
    }
    else
    {
        if(b>c)
        {
            A = b;
            B = a;
            C = c;
        }
        else
        {
            A = c;
            B = b;
            C = a;
        }

    }
    //printf("%lf %lf %lf", A, B, C);

    if(A>= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(A*A == (B*B + C*C))
        printf("TRIANGULO RETANGULO\n");
    if(A*A > (B*B + C*C))
        printf("TRIANGULO OBTUSANGULO\n");
    if(A*A < (B*B + C*C))
        printf("TRIANGULO ACUTANGULO\n");
    if(A == B && B == C)
        printf("TRIANGULO EQUILATERO\n");
    if((A==B && B!=C) || (A==C && C!=B) || (B==C && C!=A))
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}

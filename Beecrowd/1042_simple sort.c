#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // min
    a<b ? (a<c ? printf("%d\n", a) : printf("%d\n", c)) : (b<c ? printf("%d\n", b) : printf("%d\n", c));
    // second max
    a>b ? (b>c ? printf("%d\n", b) : (a>c ? printf("%d\n", c) : printf("%d\n", a))) : a>c ? printf("%d\n", a) : (b>c ? printf("%d\n", c): printf("%d\n", b));
    // max
    a>b ? (a>c ? printf("%d\n", a) : printf("%d\n", c)) : b>c ? printf("%d\n", b) : printf("%d\n", c);

    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

#include <stdio.h>
int main()
{
    int test_case,X,Y,A;
    scanf("%d", &test_case);

    while(test_case--)
    {

        scanf("%d%d%d", &X, &Y, &A);
        if((X>=20 && X<Y) && (Y<=40))
        {
            if((A>=10 && A<=50) && A<Y && A>=X)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
        else
            printf("NO\n");

    }


    return 0;
}

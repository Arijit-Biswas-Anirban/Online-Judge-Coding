#include <stdio.h>

int main(void) {
    int test_case;
    scanf("%d", &test_case);

    while (test_case--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int sec_max = (x > y) ? ((y > z) ? y : ((x > z) ? z : x)) : ((x > z) ? x : ((y > z) ? z : y));
        printf("%d\n", sec_max);
    }

    return 0;
}

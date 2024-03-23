#include <stdio.h>

int main(void) {
	int test_case;
	scanf("%d", &test_case);

	while(test_case--){
	    int x, y;
	    scanf("%d%d", &x, &y);
	    if(x>y){
	        printf("%d\n", x-y);
	    }
	}


	return 0;
}

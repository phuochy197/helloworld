#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int integer1;
	int integer2;
	int sum;
	printf(" Enter first integer\n");
	scanf("%d", &integer1);
	printf(" Enter secon integer\n");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	printf("Sum is %d\n", sum);
	return 0;
}

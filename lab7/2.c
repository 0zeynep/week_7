#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,C;
	printf("Enter first value");
	scanf("%d",&A);
	printf("Enter second value");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("new first value:%d\n",A);
	printf("new second value:%d",B);
	return 0;
}

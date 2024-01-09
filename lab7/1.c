#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,T;
	printf("Enter two numbers");
	scanf("%d%d",&A,&B);
	T=A+B;
	printf("sum of the two numbers %d",T);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,a,b,c,d,x;
	printf("Enter amount of money");
	scanf("%d",&n);
	
		a=n/100;
		x=n%100;
		b=x/50;
		x=x%50;
		c=x/20;
		x=x%20;
		d=x/10;
		printf("%d pieces 100 banknote",a);
		printf("\n");
		printf("%d pieces 50 banknote",b);
		printf("\n");
		printf("%d pices 20 banknote",c);
		printf("\n");
		printf("%d pieces 10 banknote",d);
		
	
	return 0;
}

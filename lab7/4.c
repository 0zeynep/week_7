#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r,t,p,a,pi=3.14;
	printf("Enter radius of circle");
	scanf("%f",&r);
	printf("Enter type of operation");
	scanf("%f",&t);
		if (t!=1 || t!=2 ){
			printf("Enter true type");
			scanf("%f",&t);
		}
			
		if (t==1){
			p=2*pi*r;
			printf("perimeter of circle:%f",p);
			
		}
		if (t==2){
		
			a=pi*r*r;
			printf("area of circle%f",a);
			}
		
			return 0;
}

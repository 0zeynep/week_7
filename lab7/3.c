#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int id,m,f,g;
	printf("Enter student id");
	scanf("%d",&id);
	printf("Enter midterm grade");
	scanf("%d",&m);
	printf("Enter final grade");
	scanf("%d",&f);
	g=m*40/100+f*60/100;
	printf("student id is %d",id);
	printf("grade is %d",g);

	
	
	return 0;
}

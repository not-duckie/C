#include<stdio.h>

int main()
{ int x;
	printf("Enter a vlaue\n");
	scanf("%d", &x);
	printf("\n\n\n");
	if(x<-3)
		printf("The value of function is -3\n");
	if(x<=3&&x>=-3||x>3)
		printf("The value of function is 3\n");
	printf("\n\n\n");
}
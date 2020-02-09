#include<stdio.h>
#include<stdlib.h>
int main()
{ int x,y;
  system("clear");
	printf("%s", "Enter the values of variables");
	scanf("%d\n%d", &x, &y);
	printf("%s %d %s %d\n","The value of a =", x, "and b =", y);
   x=x+y;
   y=x-y;
   x=x-y;
	printf("%s", "NOW\n");
	printf("%s %d %s %d\n","The value of a =", x, "and b =", y);
	getc;
}

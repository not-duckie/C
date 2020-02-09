#include<stdlib.h>
#include<stdio.h>
int main()
{ system("clear");
  int x,y,z;
	printf("%s", "Enter the value of variables\n");
	scanf("%d\n%d", &x, &y);
	printf("%s %d %s %d\n","The value of a =", x, "and b =", y);
	z=x;
	x=y;
	y=z;
	printf("%s", "Now\n");
	printf("%s %d %s %d\n","The value of a =", x, "and b =", y);
  getc;
}

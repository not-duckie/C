#include<stdio.h>

#define pi 3.14

int main()
{ char ch;
  float r, area, circum;
	printf("%s", "Press 'A' for Area\nPress 'C' for Circumference\n");
	scanf("%c", &ch);
	printf("%s" ,"Enter the radious of the circle\n");
	scanf("%f", &r);
	
	if(ch=='A'||'a')
	{ 	area=pi*r*r;
		printf("%s %.3f\n", "The area is\n", area); }	
	else
	{ 	circum=2*pi*r;
		printf("%s %.3f\n", "The circumference is\n", circum);
	}
}

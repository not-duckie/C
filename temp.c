#include<stdio.h>
int main()
{ float c, f;
	printf("%s\n", "Enter the value of Temp in Deg Celsius\n");
	scanf("%f", &c);
	f= (9*c)/5 - 32;
	printf("%s %.4f\n", "The temp in Deg F is", f);
	return(0);
}

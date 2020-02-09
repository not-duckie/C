#include<stdio.h>

int main()
{ int *ptr, a, **ptr1;

	ptr=&a;
	ptr1=&ptr;
	printf("\n\n");
	printf("The value of the variable is %d\n", a);
	printf("\n");
	printf("The address of variable is: %p\n", &a);
	printf("\n");
	printf("The value of pointer to variable is %p\n", ptr);
	printf("\n");
	printf("The value of variable to which pointer points is %d\n", *ptr);
	printf("\n");
	printf("The address of first pointer is %x\n", &ptr);
	printf("\n");
	printf("The value of pointer to pointer is %p\n", ptr1);
	printf("\n");
	printf("The value of pointer which the second pointer has address of(i.e the address of var) %p\n", *ptr1);
	printf("\n");
	printf("The value of variable from second pointer is %d\n", **ptr1);
	printf("\n\n");
}
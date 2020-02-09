#include<stdio.h>
#include<string.h>
int main()
{ int i, a, arr[10],tmp;

	printf("\n\n\n\n");
	printf("Enter a the data into the array\n");
	for(i=0;i<10;i++)
	{	scanf("%d\n", &arr[i]); }
	
	printf("\n\n");
	
	printf("Enter the number to find\n");
	scanf("%d\n", &a);

	for(i=0;i<10;i++)
	{	if( arr[i] == a)
			{ tmp=i;
			break ; }
	}
	printf("\n\n");
	if(tmp==0)	
	printf("Did't found the element");
	else
	printf("The element %d found at %d", a, i);
	
	printf("\n\n\n\n");
}

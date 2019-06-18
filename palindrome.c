#include<stdio.h>

int main()
{ int i=0,j=0,x,a[25],tmp=1;
	printf("\n\n\n\nEnter the no. digit of  integral number\n");
	scanf("%d", &x);
	for(i=0;i<x;i++)
	{ scanf("%1d", a[i]);
	}

	for(i=0,j=0;i<(x/2),j>(x/2);i++,j--)
	{	if(a[i]==a[j])
		{tmp++; }
	else
	{ printf("The number is not a palindrome\n"); 
		break; }

	}
if(tmp==x)
{ printf("The number is a palindrome\n"); }

printf("\n\n\n\n\n");


}

#include<stdio.h>

int main()
{   int n=5;
	for(int i=0;i<n-2;i++)
	{ for (int j=0;j<n;j++)
	   {	 if( j >= (n/2) - i && j <= (n/2) + i)
		   {	printf("*"); }
		else
		{ printf(" "); }
	   }
	printf("\n") ;
	}

}

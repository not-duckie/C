#include<stdio.h>
int main()
{ int x,tmp;
	scanf("%d", &x);
	tmp=x;
	for(int i=0;i<x;i++)
	{	
		for(int j=x;j>i;j--)
		{ printf("*"); }  
	
		printf("\n");
	}
}

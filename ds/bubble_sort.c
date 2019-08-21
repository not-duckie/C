//!/usr/bin/env gcc

#include<stdio.h>

void swap(int *a, int *b){
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
}

void bubble_sort(int a[10], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]); } 
	printf("\n\n\n");
}



void main()
{
	int a[10],i,n;
	printf("Enter the array elements (10)\n");
	for(i=0;i<10;i++){
		scanf("%d", &a[i]); }
	printf("The elements of the array are\n");
	for(i=0;i<10;i++){
		printf("%d\t",a[i]); }
	printf("A");
	n = sizeof(a);
	printf("%d",n);
	bubble_sort(a,n);
}

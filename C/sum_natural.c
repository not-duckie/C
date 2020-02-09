#include<stdio.h>

int main()
{ int n, sum=0;
	printf("\n\n\n\nEnter the value till you want sum of\n");
	scanf("%d", &n);

	for(int i=1;i<=n;i++) {
	  sum=sum+i; 
	}
	printf("The total sum is = %d\n\n\n\n\n", sum);

}

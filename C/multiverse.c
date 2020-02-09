#include<stdio.h>

int main()
{ int arr[5][5],i,j;
	printf("\n\n\nEnter the 5x5 matrix, please\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			 scanf("%d", &arr[i][j]);
	}

	printf("\n\n\n\n\n");
	
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++)
			 printf(" %d", arr[i][j]); 
	printf("\n");
	}

printf("\n\n\n\n\n");
}

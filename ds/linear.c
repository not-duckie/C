#include<stdio.h>

void main(){
	int x,a[100],n;
  	printf("Enter the length of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); }

	for(int i=0;i<n;i++){
		printf("%d\t",a[i]); }

	printf("\nEnter the element to be searched\n");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("Element Found @ %d\n",i+1);
			break;	}
	}
}


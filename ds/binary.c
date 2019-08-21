#include<stdio.h>

void main(){
	int n,a[100],x,s,l,m;
  	printf("\n\n\nEnter the length of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); }

	for(int i=0;i<n;i++){
		printf("%d\t",a[i]); }

	printf("\nEnter the element to be searched\n");
	scanf("%d",&x);
	s = 0;
	l = n-1;
	while (s<=l){
	m = (s+l)/2;
		if(a[m]==x){
			printf("Found @ %d\n\n",m+1);
			break;	}
		else{
			if(a[m]<x){
				s = m + 1; }
			else{
				l = m - 1;}
		}
	}
	if(s>l){
		printf("The element is not in array\n"); }
}


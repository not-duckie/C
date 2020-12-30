#include<stdio.h>

struct array{
	int arr[10];
	int len;
};


int main(){
	struct array arr1;
	arr1 = (struct array){ {10,9,8,7,6,5,4,3,2,1}, 10};
	printf("arr1 len is %d",arr1.len);
}

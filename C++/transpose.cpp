#include<iostream>
using namespace std;

void transpose(int array1[3][3], int m, int n)
{ int arr2[3][3];

	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		arr2[j][i]=array1[i][j];}
	}


	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		printf("%d ", arr2[i][j]);}
	printf("\n");}

}

int main(){
	int arr[3][3];
	cout<<"Enter the elements of the matrix"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];  }
			
	}
	cout<<endl<<endl;
	transpose(arr,3,3);
}

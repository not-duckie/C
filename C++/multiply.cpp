#include<iostream>
using namespace std;

void multiply(int array1[3][3], int m, int n)
{ int p,q,arr2[3][3],arr3[3][3],sum=0;
	
	cout<<"Enter the number of rows and colums of second matrix\n";
	cin>>p>>q;
	
	if(n!=q) {
		cout<<"The matix cannot be multiplied\n";
		exit(1);
	}

	cout<<"Enter the elements of second matix\n";
	for(int i =0;i<p;i++)
	{	for(int j=0;j<q;j++)
			{ cin>>arr2[i][j];
			}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<p;k++){
			   sum = sum + (array1[i][k]*arr2[k][j]);
			}
		arr3[i][j]=sum;
		sum=0;}
	}
cout<<"the reulting matix is\n";
	for(int i =0;i<p;i++)
	{	for(int j=0;j<q;j++)
			{ cout<<arr3[i][j]<<"\t";
			}
			cout<<endl;
	}


}

int main(){
        int arr[3][3];
        cout<<"Enter the elements of the matrix "<<endl;
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                        cin>>arr[i][j]; }

        }
        multiply(arr,3,3);

}



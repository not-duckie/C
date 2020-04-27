#include<iostream>
using namespace std;

template <typename nice>
int binary_search(int n, nice arr[],nice x){
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			cout<<"Found the Element "<<x<<" at"<<i+1<<endl;
			return i+1 ;
			break;
		}
	}
}



int main(int argc, char* argv[]){
	float arr[] = {2.6,6.6,4.20,85.6,4.2};
	int arr1[] = {1,7,5,34,7,8,06,42,7,9};

	
	binary_search(sizeof(arr)/sizeof(float),arr,float(85.6));
	
	binary_search(sizeof(arr1)/sizeof(int),arr1,9);


	

}
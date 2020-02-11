#include<iostream>
using namespace std;
int main(){
	int a,b,max;
	cout<<"Enter the two numric values"<<endl;
	cin>>a>>b;
	max = (a>b)? a : b ;
	cout<<"The largest value is "<<max<<endl;
	return 1;
}

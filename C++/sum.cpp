#include<iostream>
using namespace std;

int sum(int a, int b){
	return a+b ;
}
int main(){
	int a,b;
	cout<<"Enter the numbers to be added\n"<<endl;
	cin>>a>>b;
	cout<<"The sum is "<<sum(a,b)<<endl;
	return 0;
}

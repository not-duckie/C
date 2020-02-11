#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter two numbers, please"<<endl;
	cin>>a>>b;
	cout<<"The program will print their product and sum.\nIf first number is greater than 2nd otherwise sorry\n"<<endl;
	if (a>b){
		cout<<"The multiplication and sum is\t"<<a*b<<"\t"<<a+b<<" respectively"<<endl;
	}
	else{
		cout<<"2nd number is greater\nSorry"<<endl;
	}
	return (0);
}

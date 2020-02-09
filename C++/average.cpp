#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter the value of two numbers"<<endl;
	cin>>a>>b;
	cout<<"The average of the two number is "<<(a+b)/2<<endl;
	a = (int)a % (int)b ;
	cout<<"Remainder of the two numbers first divided by the second "<<a<<endl;
}

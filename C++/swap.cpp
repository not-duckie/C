#include<iostream>
using namespace std;
int main()
{ system("clear");
  int x,y,z;
	cout<<"Enter the value of variables"<<endl;
	cin>>x>>y;
	cout<<"The value of a = "<<x<<"and b = "<<y<<endl;
	z=x;
	x=y;
	y=z;
	cout<<"Now"<<endl;
	cout<<"The value of a = "<<x<<"and b = "<<y<<endl;
}

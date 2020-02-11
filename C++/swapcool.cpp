#include<iostream>
using namespace std;
int main()
{ int x,y;
  system("clear");
 	cout<<"Enter the value of variables"<<endl;
	cin>>x>>y;
	cout<<"The value of a = "<<x<<"and b = "<<y<<endl;
	x = x + y;
	y = x - y;
	x = x - y;
	cout<<"Now"<<endl;
	cout<<"The value of a = "<<x<<"and b = "<<y<<endl;
}

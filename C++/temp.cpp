#include<iostream>
using namespace std;
int main()
{ float c, f;
	cout<<"Enter the value of Temp in Deg Celsius\n"<<endl;
	cin>>c;
	f= (9*c)/5 - 32;
	cout<<"The temp in Deg F is "<<f<<endl;
	return(0);
}

#include<iostream>
using namespace std;

float function(float u,float a,float t){
	return u*t + 0.5*a*t*t ;
}

int main(){
	float u,a,t;
	cout<<"Enter the value of u, a and t respectively"<<endl;
	cin>>u>>a>>t;
	cout<<"Value of the function is\n"<<function(u,a,t)<<endl;
}

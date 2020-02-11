#include<iostream>
using namespace std;

int compare(int a, int b){
	if(a>b){ return (a); }
	else { return (b); }
}

int main(){
	int a,b,c,d,tmp;
	cout<<"Enter 4 numbers, please"<<endl;
	cin>>a>>b>>c>>d;
	tmp = compare(a,b);
	tmp = compare(tmp,c);
	tmp = compare(tmp,d);
	cout<<tmp<<" is the greatest number"<<endl;
}


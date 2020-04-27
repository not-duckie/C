#include<iostream>
#include<cstring>
using namespace std;

class copycat{
	char *a,*b;

public:
	copycat(char *c){
		this->a = c;
	}

	copycat operator = (const copycat obj){
		strcpy(b,obj.a);	
		copycat nice(b);
		return nice;
	}

	void disply(){
		cout<<a<<endl;
	}

};


int main(int argc, char* argv[]){
	char nice[25];	
	cout<<"\n\n\nEnter the String Please\n"<<endl;
	cin>>nice;
	copycat a(nice);
	copycat b = a;
	b.disply();

	cout<<"\n\nSourav Goel\n55-IT-18"<<endl;

}
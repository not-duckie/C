#include<iostream>
using namespace std;

void area(float a){
	cout<<"Comupting Area of triangle"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Area of Square is "<<a*a<<endl;
}

void area(float a,float b){
	
	cout<<"Comupting Area of triangle"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Area of Triangle "<<0.5*a*b<<endl;
	cout<<"Comupting Area of Rectangle"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Area of Triangle "<<a*b<<endl;

}



int main(int argc, char *argv[]){
	
	//45 69

	cout<<"\n\n\n"<<endl;
	if(argc != 3){
		cout<<"Usage .\\nice.exe 45 69"<<endl;
	}

	else {
		area(atof(argv[1]));
		area(atof(argv[1]),atof(argv[2]));
	}

	
	


}
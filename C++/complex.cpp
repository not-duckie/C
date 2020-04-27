#include<iostream>
using namespace std;

class complex {
	float a,b,real,img;
public:
	
	complex(float a,float b){
		this->real = a;
		this->img = b;
	}

	complex operator + (const complex obj){
		a = this->real + obj.real;
		b = this->img + obj.img;

		complex obj1(a,b) ;

		return obj1;

	}

	complex operator - (const complex obj){
		a = this->real - obj.real;
		b = this->img - obj.img;

		complex obj1(a,b) ;

		return obj1; }

	void disply(){
		cout<<"The Complex number is "<<this->real<<" + i"<<this->img<<endl;
	}
};

int main(int argc, char* argv[]){
	float a,b;
	complex num1(6,9), num2(4,2);

	complex num3 = num1 - num2 ;

	num3.disply();


	

}
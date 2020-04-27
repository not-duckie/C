#include<iostream>
using namespace std;

class vehicle {
protected:
	float mileage, price;
public:
	virtual void input() = 0 ;
	void nice(){
		cout<<"Enter the following information";
		cout<<"\nMileage > ";
		cin>>mileage;
		cout<<"\nPrice > ";
		cin>>price;
	}
};
// ======================================================================

class car : public vehicle {
protected:
		float ownership_cost;
		unsigned int warranty,seating;
		char fuel[10]; 
public:
	virtual void input(){
		vehicle::nice();
		cout<<"\nOwnerShip Cost > ";
		cin>>ownership_cost;
		cout<<"\nWarranty Period (Years in Num) > ";
		cin>>warranty;
		cout<<"\nSeating (Num) > ";
		cin>>seating;
		cout<<"\nFuel Type > ";
		cin>>fuel;
	}

};


class bike : public vehicle {
protected:
		unsigned int cylinders,gears;
		char cooling[10], wheel[10];
		float tank_size;
public:
	virtual void input(){
		vehicle::nice();
		cout<<"\nNumber of Cylinders > ";
		cin>>cylinders;
		cout<<"\nNumber of Gears > ";
		cin>>gears;
		cout<<"\nType of Cooling > ";
		cin>>cooling;
		cout<<"Type of Wheels > ";
		cin>>wheel;
		cout<<"Fuel Tank Size > ";
		cin>>tank_size;
	}
};

// ============================================================================
class audi : public car{
	char model[20]; 
public:
	void input(){
		car::input();
		cout<<"\nModel Number > ";
		cin>>model;
	}

};

class ford : public car {
	char model[20];
public:
	void input(){
		car::input();
		cout<<"\nModel Number > ";
		cin>>model;
	}

};

class bajaj : public bike {
	char make_typ[20];
public:
	void input(){
		bike::input();
		cout<<"\nModel Number > ";
		cin>>make_typ;
	}

};

class tvs :  public bike {
	char make_typ[20];
public:
	void input(){
		bike::input();
		cout<<"\nModel Number > ";
		cin>>make_typ;
	}

};





int main(int argc, char* argv[]){
	audi car1;
	ford car2;
	tvs bike1;
	bajaj bike2;
	cout<<"Enter the information for Car1 of Audi\n";
	car1.input();
	cout<<"Enter the information for Car2 of Ford\n";
	car2.input();
	cout<<"Enter the information for Bike1 of TVS\n";
	bike1.input();
	cout<<"Enter the information for Bike2 of Bajaj\n";
	bike2.input();

}
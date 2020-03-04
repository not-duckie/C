#include<iostream>
using namespace std;

class db ;

class dm {
	float m,cm,dist; 
	public:
	void add(db);
	void read();
};

class db {
	float ft,inch;
	public:
	friend void dm::add(db); 
	void read();
};

void dm::read(){
	cout<<"Enter the value for meter "<<endl;
	cin>>m;
	cout<<"Enter the value for centimeter "<<endl;
	cin>>cm;
}

void db::read(){
	cout<<"Enter the value for feet "<<endl;
	cin>>ft;
	cout<<"Enter the value for inch "<<endl;
	cin>>inch; }

void dm::add(db b){
	dist = m + cm/100 + b.ft/3.28084 + b.inch/39.3701 ;
	cout<<"The added distance is "<<dist<<endl; 

}



int main(){
	dm nice;
	db wow;
	nice.read();
	wow.read();
	nice.add(wow);
}

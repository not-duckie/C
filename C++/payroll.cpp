#include<iostream>
#include<cstring>
using namespace std;

class payroll {
	char name[20],desg[20];
	int ecode,accNo;
	float basicPay,grossPay;
	public:
	payroll();
	payroll(int id);
	~payroll();
	payroll(const payroll &kay);
	void display();
	void net_salary();
};

payroll::payroll(const payroll &kay){
	cout<<"======================"<<endl;
	cout<<"Copy Constructor Called\nCopying values"<<endl;
	cout<<"======================"<<endl;
	ecode = kay.ecode;
	basicPay = kay.basicPay;
	grossPay = kay.grossPay;
}

payroll::payroll(){
	cout<<"======================"<<endl;
	cout<<"Default Constructor Called"<<endl;
	cout<<"======================"<<endl;
	cout<<"Enter the name of employee"<<endl;
	cin>>name;
	cout<<"Enter the Account Number of the employee"<<endl;
	cin>>accNo;
	cout<<"Enter the desgination of the employee"<<endl;
	cin>>desg;
	cout<<"Enter the basic pay of the employee"<<endl;
	cin>>basicPay;	
	cout<<"Enter the employee id"<<endl;
	cin>>ecode; }

payroll::payroll(int id){
	cout<<"======================"<<endl;
	cout<<"Parametric Constructor Called\nAlloting Parameter Value to employee code"<<endl;
	cout<<"======================"<<endl;
	cout<<"Enter the name of employee"<<endl;
	cin>>name;
	cout<<"Enter the Account Number of the employee"<<endl;
	cin>>accNo;
	cout<<"Enter the desgination of the employee"<<endl;
	cin>>desg;
	cout<<"Enter the basic pay of the employee"<<endl;
	cin>>basicPay;	
	cout<<"The employee id assigned is "<<id<<endl;
	ecode = id; }

payroll::~payroll(){
	cout<<"======================"<<endl;
	cout<<"Destructor Called\nFreeing  Memory\nDone"<<endl;
	cout<<"======================"<<endl;
}


void payroll::net_salary(){
	float hra=0.5,da=0.3,cca=0.6,ppf=0.2,gpf=0.12,cpf=0.10,lic=0.19,nss=0.20,nsc=.012;
	float add,sub;
	hra = basicPay*hra;
	da = basicPay*da;
	cca = basicPay*cca ;
	add = hra + da + cca;
	
	ppf = basicPay*ppf;
	gpf =  basicPay*gpf; 
	cpf =  basicPay*cpf;  
	lic = basicPay*lic;
	nss =  basicPay*nss;
	nsc =  basicPay*nsc;

	sub = ppf + gpf + lic + nss + nsc;

	cout<<"The basic pay is "<<basicPay<<endl;
	cout<<"The Additions are "<<endl;
	cout<<"HRA= "<<hra<<"\n"<<"DA= "<<da<<endl<<"CCA= "<<cca<<endl;
	cout<<"-------------------"<<endl;
	cout<<"\t"<<add<<"\t"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"The subtractions are "<<endl;
	cout<<"PPF= "<<ppf<<endl<<"GPF= "<<gpf<<endl<<"CPF= "<<cpf<<endl<<"LIC= "<<lic<<endl<<"NSS= "<<nss<<endl<<"NSC= "<<nsc<<endl;
	cout<<"-------------------"<<endl;
	cout<<"\t"<<sub<<"\t"<<endl;
	cout<<"-------------------"<<endl;
	grossPay = basicPay + add - sub;
	cout<<"The Gross Pay is "<<grossPay<<endl;  }


void payroll::display(){
	cout<<"Employee Name is "<<name<<endl;
	cout<<"Employee Code is "<<ecode<<endl;
	cout<<"Desgination of the Employee is "<<desg<<endl;
	cout<<"Account Number of the Employee is "<<accNo<<endl;
	cout<<"The Basic Pay is "<<basicPay<<endl;
	cout<<"The Gross Pay is "<<grossPay<<endl; }

int main(){
	payroll nice;
	payroll nice(1);
	cout<<"======================"<<endl;
	nice.net_salary();
	cout<<"======================"<<endl;
	nice.display();	
	cout<<"======================"<<endl;
	payroll nice2 = nice;
	return 0;
}


#include<iostream>
using namespace std;
class bank {
	char name[20];
	char tyacc[20];
	 int accNo ;
	 float bal;
	public:
	void initial(int id);
	void deposit();
	void withdraw();
	void display();
};
void bank::initial( int id){
	cout<<"Enter the name"<<endl;
	cin>>name;
	cout<<"Enter the type of account "<<endl;
	cin>>tyacc;
	accNo = id;
	bal = 0;
	cout<<"Account Number assigned to you is "<<accNo<<endl;
	cout<<"Your Current Balance is "<<bal<<endl;
}
void bank::deposit(){
	 float amt;
	cout<<"Enter the amount to be depoisted in the account "<<endl;
	cin>>amt;
	bal = bal + amt;
	cout<<"Your Current Balance is "<<bal<<endl; }
void bank::withdraw(){
	 float dep;
	cout<<"Enter the amount to be withdrawn "<<endl;
	cin>>dep;
	if (dep > bal){ cout<<"Insufficient Funds"<<endl;}
	else { bal = bal - dep;
 				 cout<<"The Balance now is "<<bal<<endl;	}
}
void bank::display() {
	cout<<"Your Name is "<<name<<endl;
	cout<<"Account type is "<<tyacc<<endl;
	cout<<"Account Number is "<<accNo<<endl;
	cout<<"Current Balance is "<<bal<<endl;
}
int main(){
bank nice[3];
for(int i=0;i<3;i++){
	cout<<"========================"<<endl;
	nice[i].initial(i+1);
	cout<<"========================"<<endl;
	nice[i].deposit();
	cout<<"========================"<<endl;
	nice[i].withdraw();
	cout<<"========================"<<endl;
	nice[i].display();
	}
}


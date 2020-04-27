#include<iostream>
using namespace std;

class student{
protected:
	unsigned int roll;
	char name[20];
public:
	student(){
		cout<<"Enter the name of the student"<<endl;
		cin>>name;
		cout<<"Enter the roll number of student"<<endl;
		cin>>roll;
	}

};



class exam : virtual public student {
protected:
	float marks[6];
public:
	exam(){
		cout<<"Enter the marks of the following subjects"<<endl; 
		for(int i=0;i<6;i++){
			cout<<"Subject "<<i+1<<" > ";
			cin>>marks[i];
		}
	}
};



class result : public exam {
protected:
	float total_marks=0, percentage = 0;
public:
	result(){
		for(int i=0;i<6;i++){
			total_marks = total_marks + marks[i];
		}

		percentage = (total_marks/600)*100 ;
	}
	
	~result(){
		cout<<"The name of the Student is "<<name<<endl;
		cout<<"==========Result=========="<<endl;
		for(int i=0;i<6;i++){
			cout<<"Subject "<<i+1<<"\t"<<marks[i]<<endl;
		}
		cout<<"Total Marks\t"<<total_marks<<"/600"<<endl;
		cout<<"Percentage\t"<<percentage<<endl;
	
		
	}

};



int main(int argc, char* argv[]){
	cout<<"\n\n"<<endl;	
	result obj1;
	

}
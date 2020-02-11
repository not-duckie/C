#include<iostream>
using namespace std;

int check_date(int d){ return (d>0 && d<31) ? 1:0 ; }

int check_month(int d, int m, int y){ 
	if (m<7){ 
		if ( m == 2){
			if ( d <= 28 || (y%4==0 && d<=29) ){
				return 1; }
			else { return 0; }
		}
		if(m%2 == 0){
			if(d>0 && d<30){
				return 1; }
			else { return 0; }
		}
		else {
			if(d>0 && d<31){
				return 1; }
			else { return 0; }
		}
	}
	else {	if( m%2 == 0){ if(d>0 && d<=31){ return 1 ;}
 													else {return 0; }	}
					else{
						if(d>0 && d<=30){ return 1; }
						else {return 0; }
					}
	}
}

int check_year(int y){ return ( y <= 20 && y > 0)?1:0 ; }



int main(){
	int d,m,y;
	cout<<"Enter the date in format dd mm yy"<<endl;
	cin>>d>>m>>y;
	if (check_date(d) && check_year(y) && check_month(d,m,y))
		{ cout<<"the date is correct\n"; }
	else { cout<<"the date is incorrect\n"; }
}

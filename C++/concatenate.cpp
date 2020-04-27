#include<iostream>
#include<cstring>
using namespace std;

class String
{       char str[20];
        friend void display_string(const String obj1);
        friend void input(String* obj1);
        public:
                
                String operator +(String x)
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
                

};

void display_string(const String obj1){ cout<<obj1.str; }
void input(String *obj1){ cout<<"\n Enter String :";
          cin>>obj1->str;   }


int main(int argc, char* argv[])
{
        String str1, str2;

        input(&str1);
        input(&str2);

        cout<<"\n\n First String is>";
        display_string(str1);

        cout<<"\n\n Second String is>";
        display_string(str2);

        cout<<"\n\n\n";
        String str3=str1+str2;
        cout<<"\n\n Concatenated String is>";
        display_string(str3);

        
        return 0;

        

}
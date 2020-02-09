#include<stdio.h>
//This is to display sizeof variables
int main()
{ char c;
  short d;
  int a;
  long e;
  double f;
  float b;
  long double g;
  printf("The int is %d\nfloat is %d\nchar is %d\nshort is %d\nlong is %d\ndouble is %d\nlong double is %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f), sizeof(g) );
printf("----------------------------------------------------------------------------------------------------\n");
  printf("The int is %d\nfloat is %d\nchar is %d\nshort is %d\nlong is %d\ndouble is %d\nlong double is %d\n", sizeof(int), sizeof(float), sizeof(char), sizeof(short), sizeof(long), sizeof(double), sizeof(long double) );


}

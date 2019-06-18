#include<stdio.h>
 struct nice{
 	char name[10];
 	int age;
 };
 union cool{
 	char name[10];
 	int age;
 };


int main()
{ struct nice data;
  union cool wow;
  printf("\n\n");
  printf("The size of struct is %d\n\n", sizeof(data));
  printf("The size of union is %d\n\n", sizeof(wow));
  printf("\n\n");
}
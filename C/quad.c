#include<stdio.h>
#include<math.h>
 
int main()
{
  float a,b,c;
  float d,root1,root2;  
 
  printf("Enter coefficents of quadratic equation\n");
  scanf("%f\n%f\n%f", &a, &b, &c);
   
  d = b * b - 4 * a * c;
  
  if(d < 0)
  {
    printf("Roots are complex number.\n");
  }
 
   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f\n",root1,root2);
 
  return 0;
}

#include<stdio.h>

int main()
{ float m;
	printf("%s", "Enter the Marks and this program will tell the division the student have passed if passed\n");
	scanf("%f", &m);
 	if (m >= 90) 		
	printf("%s", "The student have passed with first division\n");
	else	if(m < 90 && m >= 80) 	
		printf("%s", "The student have passed with second division\n");
			else if (m < 80 && m >= 70)     
				printf("%s", "The student have passed with third division\n");
					else	if (m >= 33)
						printf("%s", "The student have passed\n");
						else 	if (m < 33) 		
							printf("%s", "The student have failed\n");
	else
		printf("The student have failed");
}

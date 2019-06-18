#include<stdio.h>
int main()
{ int x;
	printf("\n\n\n\n\nEnter the vlaue in integer and it will tell you the respective week day\n");
	scanf("%d", &x);
	
	switch(x) {
	  case 1	: printf("Monday\n\n\n\n\n");
		break;
	  case 2	: printf("Tuesday\n\n\n\n\n");
		break;
	  case 3	: printf("Wednesday\n\n\n\n\n");
		break;
	  case 4	: printf("Thrusday\n\n\n\n\n");
		break;
	  case 5	: printf("Friday!!!\n\n\n\n\n");
		break;
	  case 6	: printf("Saturday!!!\n\n\n\n\n");
		break;
	  case 7	: printf("Sunday!!!\n\n\n\n\n");
		break;
	  default	: printf("The int should 0 < int < 8\n\n\n\n\n");
	}
}

#include<stdio.h>
int main()
{	
	int i=0;
	for(i=0;i<70;i++)
	{	
		printf("%d\n", i);
		if(i==8)
		{ printf("Its exiting the loop at %d due to break\n", i);	
		  break; }

	}
}

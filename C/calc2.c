#include<stdio.h>
void main()
{ char ch, k='n', o;
	int a,b;
	float x,y;
		
		printf("---------------------------------------------------------------------------\n");
		printf("%s\n","Enter 'F', if you want to operate on floats and 'I' if on integers" );
		scanf("%c", &ch);
		printf("---------------------------------------------------------------------------\n");
		printf("%s", "Enter the numbers\n");
			 scanf("%f\n%f", &x,&y);	

		printf("%s", "Enter the opertion to do on them\n");
		
		
		scanf("%c",&o);
	
		switch(o)
	
	{	case '+' : printf("The answer is %f\n", x+y);
		break;
		case '-' : printf("The answer is %f\n", x-y);
		break;
		case '/' : printf("The answer is %f\n", x*y);
		break;
		case '*' : printf("The answer is %f\n", x/y);
	}

       
}

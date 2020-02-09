#include<stdio.h>
void main()
{ char ch, k='n', o;
	int a,b;
	float x,y;
//	do{
		printf("---------------------------------------------------------------------------\n");
		printf("%s\n","Enter 'F', if you want to operate on floats and 'I' if on integers" );
		scanf("%c", &ch);
		printf("---------------------------------------------------------------------------\n");
		printf("%s", "Enter the numbers\n");
		if(ch=='f'||'F')
			 scanf("%f\n%f", &x,&y);	
		else
			scanf("%d\n%d", &a, &b );

		printf("%s", "Enter the opertion to do on them\n");
		
//		scanf("%c", &o);
		
		scanf("%c",&o);
	
		switch(o)
	
		{	case '+' : { if(ch=='f'||'F')
				   printf("The answer is %f\n", x+y);
				else
					printf("The answer is %d\n", a+b);
			   }
		break;
		case '-' : { if(ch=='f'||'F')
				   printf("The answer is %f\n", x-y);
				else
					printf("The answer is %d\n", a-b);
			   }
		case '/' : { if(ch=='f'|| 'F')
				   printf("The answer is %f\n", x+y);
				else
					printf("The answer is %d\n", a+b);
			   }
		break;
		case '*' : { if(ch=='f'|| 'F')
				   printf("The answer is %f\n", x+y);
				else
					printf("The answer is %d\n", a+b);
			   }
	}

       /*	printf("Do you wish you continue\n");
	 scanf("%c", &k); */
	
  //  }while(k=='y'||'Y');


}

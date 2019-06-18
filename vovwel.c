#include<stdio.h>
#include<ctype.h>
int main()
{ char ch;
	printf("\n\n\n\n\nEnter the value of character, Please\n");
	scanf("%c", &ch);
	if(islower(ch))
		ch=toupper(ch);
	switch(ch)
	{ case 'A'	:
	  case 'E' 	:
	  case 'I' 	:
	  case 'O' 	:
	  case 'U' 	: { printf("The character is a vowel\n");
				  printf("\n\n\n\n\n"); }
	  
	  break;
	  default 	:{ printf("The character is not a vowel\n");
				printf("\n\n\n\n\n"); }
	}
	return 0;
}

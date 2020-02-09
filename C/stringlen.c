#include<stdio.h>

int main()
{ char c;
	int temp=0,v=0,cont=0;

	printf("\n\n\n");
	do{ c = getc(stdin);
		temp++;
		
		if(c=='a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')
			v++;

		}while(c!=EOF);
		printf("\n\nThe number of characters is %d\t ,number of vowels is %d and number of consonants is %d\n", temp, v, cont);
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	char str[52], arr[500];
	int c,i,n;

	for(i=0;i<52;i++)	
	{	c=26;
		while(putchar(c)!='z')
		str[i]=putchar(c);
		c++;	
	}
	
gets(arr);
printf(" %s", strr);
	for(int j=0;j<26;j++)
	{
	for(i=0;i<n;i++)
	{	switch(arr[i])
	 {	
		case 'a' : printf(str[i]);
		break;
		case 'b' : printf(str[i+1]);
		break;
		case 'c' : printf(str[i+2]);
		break;
		case 'd' : printf(str[i+3]);
		break;
		case 'e' : printf(str[i+4]);
		break;
		case 'f' : printf(str[i+5]);
		break;
		case 'g' : printf(str[i+6]);
		break;
		case 'h' : printf(str[i+7]);
		break;
		case 'i' : printf(str[i+8]);
		break;
		case 'j' : printf(str[i+9]);
		break;
		case 'k' : printf(str[i+10]);
		break;
		case 'l' : printf(str[i+11]);
		break;
		case 'm' : printf(str[i+12]);
		break;
		case 'n' : printf(str[i+13]);
		break;
		case 'o' : printf(str[i+14]);
		break;
		case 'p' : printf(str[i+15]);
		break;
		case 'q' : printf(str[i+16]);
		break;
		case 'r' : printf(str[i+17]);
		break;
		case 's' : printf(str[i+18]);
		break;
		case 't' : printf(str[i+19]);
		break;
		case 'u' : printf(str[i+20]);
		break;
		case 'v' : printf(str[i+21]);
		break;
		case 'w' : printf(str[i+22]);
		break;
		case 'x' : printf(str[i+23]);
		break;
		case 'y' : printf(str[i+24]);
		break;
		case 'z' : printf(str[i+25]);
		break;
		default :  printf(arr[i]);
	 }
	} printf("\n");
	}
	return (0);
}	

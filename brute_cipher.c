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
	
fgets(arr,500,stdin);
puts(arr);
	for(int j=0;j<26;j++)
	{
	for(i=0;i<n;i++)
	{	switch(arr[i])
	 {	
		case 'a' : printf("%c",str[i]);
		break;
		case 'b' : printf("%c",str[i+1]);
		break;
		case 'c' : printf("%c",str[i+2]);
		break;
		case 'd' : printf("%c",str[i+3]);
		break;
		case 'e' : printf("%c",str[i+4]);
		break;
		case 'f' : printf("%c",str[i+5]);
		break;
		case 'g' : printf("%c",str[i+6]);
		break;
		case 'h' : printf("%c",str[i+7]);
		break;
		case 'i' : printf("%c",str[i+8]);
		break;
		case 'j' : printf("%c",str[i+9]);
		break;
		case 'k' : printf("%c",str[i+10]);
		break;
		case 'l' : printf("%c",str[i+11]);
		break;
		case 'm' : printf("%c",str[i+12]);
		break;
		case 'n' : printf("%c",str[i+13]);
		break;
		case 'o' : printf("%c",str[i+14]);
		break;
		case 'p' : printf("%c",str[i+15]);
		break;
		case 'q' : printf("%c",str[i+16]);
		break;
		case 'r' : printf("%c",str[i+17]);
		break;
		case 's' : printf("%c",str[i+18]);
		break;
		case 't' : printf("%c",str[i+19]);
		break;
		case 'u' : printf("%c",str[i+20]);
		break;
		case 'v' : printf("%c",str[i+21]);
		break;
		case 'w' : printf("%c",str[i+22]);
		break;
		case 'x' : printf("%c",str[i+23]);
		break;
		case 'y' : printf("%c",str[i+24]);
		break;
		case 'z' : printf("%c",str[i+25]);
		break;
		default :  printf("%c",arr[i]);
	 }
	} printf("\n");
	}
	return (0);
}	

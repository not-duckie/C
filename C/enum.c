#include<stdio.h>

enum week{Sunday=1, Monday, Tueday, Wednesday, Thrusday, Friday, Saturday};

int main()
{ enum week day;
	day = Wednesday ;
	printf("%u\n", day);
}

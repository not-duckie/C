#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct File{
	char name[20];
	FILE *fp;
};

int main(int argc,char *argv[]){
	char ch;
	struct File file;
	if (argc < 2){
		printf("Usage %s <filename>",argv[0]);
		exit(0);
	}
	strcpy(file.name,argv[1]);
	if (!(file.fp = fopen(file.name,"r"))){
		printf("the file does not exists\n");
		exit(0);
	}
	while(1){
		ch = fgetc(file.fp);
		if (ch == EOF){
			printf("happy reading");
			exit(0);
		}
		printf("%c",ch);
	}

}

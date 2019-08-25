#include<stdiol.h>
#include<stdlib.h>
//#include<string.h>

struct Node {
	int data;
	struct Node *next;
}

void main(){
	int i=0,x;
	struct Node *head;
	head = (struct Node*)malloc(sizeof(struct Node));
	head->next=NULL;
	head->data=1;
	while(i!=10){
	i++;
	printf("Enter a data\n");
	scanf("&d",&x);
	struct Node *tmp ;
	tmp = (struct *)malloc(sizeof(struct Node));
	tmp->next=NULL;
	tmp->data=x;
	
	}

}

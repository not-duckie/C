#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int id;
	char name[20];
	struct node* next;
	struct node* prev;
};

struct node* head;

void push(){
	char name[20];
	int x;
	struct node* tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the employee id\n");
	scanf("%d",&x);
	getchar();
	printf("Enter the employee name\n");
	fgets(name,sizeof(name),stdin);
	
	tmp->id = x;
	strcpy(tmp->name,name);
	
	//if first node
	if(head == NULL){
		printf("Creating First Node\n");
		tmp->next = NULL;
		tmp->prev = NULL;
		head = tmp;
	}
	else{
	tmp->next = head;
	tmp->prev = NULL;
	head->prev = tmp;
	head = tmp;
	}
}
void display() {
	struct node* tmp;
	tmp = head;
	while(tmp!=NULL){
		printf("%d",tmp->id);
		puts(tmp->name);
		tmp=tmp->next;
	}
}


void main(){
	push();
	push();
	push();
	push();
	display();	
}


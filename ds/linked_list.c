#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	int data;
	char name[20];
	struct node* next;
};
struct node* head;
struct node* top;

void push(){
	int x;
	char name[20];
	struct node* tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the value of employee id\n");
	scanf("%d",&x);
	getchar();
	printf("Enter the name of the employee\n");
	fgets(name,sizeof(name),stdin);
	tmp->next = head;
	tmp->data = x;
	strcpy(tmp->name,name);
	head = tmp;
}
void display(){
	struct node* tmp;
	tmp = head;
	while(tmp!=NULL){
		printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t")
		printf("\t%d\t",tmp->data);
		puts(tmp->name);
		tmp = tmp->next;
	}
}


void main(){
	int x,i;
	char str[20];
	top = (struct node*)malloc(sizeof(struct node));
	printf("Stack Empty");
	printf("Enter the value of empolyee id\n");
	scanf("%d",&x);
	getchar();
	printf("Enter the name of the employee\n");
	fgets(str,sizeof(str),stdin);
	head = top;
	top->data=x;
	strcpy(top->name,str);
	top->next = NULL;
	push();
	push();
	push();
	display();

}

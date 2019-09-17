#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* head;
struct node* tmp;

void push(){
	int x;
	tmp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the element to be pushed on stack\n");
	scanf("%d",&x);
	tmp->data = x;
	if(head == NULL){
		head = tmp;
		tmp->next = NULL;
	}
	else {
		tmp->next = head;
		head = tmp;
	}
}
void pop(){
	if(head == NULL){
		printf("\nStack Empty\n");
	}
	else{
		tmp = head;
		head = tmp->next;
		printf("Element %d popped off the stack\n",tmp->data);
		free(tmp); 
	}
}
void display(){
	tmp  = head;
	while(tmp != NULL){
		printf("%d",tmp->data);
		tmp = tmp->next;
	}
}
void main(){
	char choice ='y';
	int x;
	while(choice == 'y'){
		printf("\n|====================Menu====================|\n");
		printf("Press 1 to push a element onto stack\n");
		printf("Press 2 to pop a element off stack\n");
		printf("Press 3 to display stack\n");
		printf("Press 4 to quit\n");
		scanf("%d",&x);
		switch(x){
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: choice = 'q';
				break;
			default: printf("Enter a valid response\n");
		}
	}
}

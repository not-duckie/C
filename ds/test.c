#include<stdio.h>

struct Node{
	int data;
	struct Node *next;
}

void main() {
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = (struct Node*)malloc(sizeof(struct *Node));
	second = (struct Node*)malloc(sizeof(struct *Node));
	third = (struct Node*)malloc(sizeof(struct *Node));

	head->data=5;
	head->next=second;

	struct Node* n;
	n = head;
	while()
	

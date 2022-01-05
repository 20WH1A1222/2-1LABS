#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node*next;
	};
void push(struct node**,int);
int pop(struct node**);
void traversal(struct node*);	
int main(){
	int want_continue,choice,data;
	struct node*head=NULL;
	printf("choice:1.push,2.pop,3.traversal");
	
do{
	printf("\n enter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("enter the value:");
	scanf("%d",&data);
	push(&head,data);
	break;
	
	case 2:
	data = pop(&head);
	printf("Popped item: %d\t", data);
	break;
	
	case 3:
	traversal(head);
	break;
	}
	printf("you want to continue enter 1");
	scanf("%d",&want_continue);
	}
	while(want_continue==1);
	return 0;
}
void push(struct node**head,int data){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	
	temp->next=*head;
	*head=temp;
	
	}
int pop(struct node**head){
	struct node*temp;
	int data;
	temp=*head;
	if(*head==NULL){
		printf("underflow");
		exit(0);
		}
else{
	
	data=temp->data;
	(*head)=(*head)->next;
	free(temp);
	return data;
	}
}	
	
void traversal(struct node*head){
	struct node*temp;
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
		}
	}
		


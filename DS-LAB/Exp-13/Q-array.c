#include<stdio.h>
#include<stdlib.h>
#define MaxSize 5
int Isfull();
int Isempty();
void Enqueue(int);
int Dequeue();
void traversal();
int front = -1;
int rear = -1;
int Queue[MaxSize];

int main()
{
	int choice,data,p,want_continue;
        printf("Enter your choice: 1.Enqueue, 2.Dequeue, 3.traversal\n");
	 do{
	        printf("enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the element to insert:\t");
			       scanf("%d",&data);
			       Enqueue(data);
			       break;
			case 2:data = Dequeue();
			       printf("deleted element = %d\n",data);
			       break;
			case 3:traversal();
			       break;
			}
			printf("want to continue, enter 1:\n");
			scanf("%d",&want_continue);
		}
		while(want_continue == 1);
	return 0;
}
int Isfull(){
    return rear == MaxSize-1;
}
int Isempty(){
    return front == -1;
}
void Enqueue(int data){
     if(Isfull() == 1)
     {
        printf("overflow");
        return;
     }
     if(front == -1){
       front = rear = 0;
       }
     else{
        rear = (rear+1) % MaxSize;
        }  
        Queue[rear] = data;       
   }
int Dequeue(){
    int data;
    if(Isempty() == 1){
       printf("underflow\n");
       exit(0);
    }
    data = Queue[front]; 
    if(front == rear){
       front = rear = -1;
     } 
    else{
       front = (front + 1) % MaxSize;
        return data;
    }
}              
void traversal()
{
	int i;
	if(rear<-1)
	{
		printf("Queue is empty\n");
	}
	else{
	        printf("Queue:\t");
		for(i=0;i<=rear;i++)
		{
			printf("%d\n",Queue[i]);
		}
   }
}

		




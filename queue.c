#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10
void enqueue(int item);
int dequeue();
void display();
int front = -1, rear=-1;
int a[MAXSIZE];
int main(){
	int n, i, opt;
	do {
	 	printf("\n Enter a choice: ");
	    printf("\n 1 enqueue: ");
	    printf("\n 2 dequeue: ");
	    printf("\n 3 for display: ");
	    printf("\n 4 for Exit.....");
	    scanf("%d", &opt);
	    switch(opt){
	    	case 1: 
			    printf("Enter a number to add: ");
	    	    scanf("%d", &n);
	    	    enqueue(n);
	    	    break;
	    	case 2:
	    		n=dequeue();
	    		printf("The deleted item is %d", n);
	    		break;
	   		case 3:
	   			display();
	   			break;
	   		case 4: 
	   		    exit(0);
		}
	} while (opt != 4);
	return 0;
}
void enqueue(int item){
	if(rear==MAXSIZE-1){
		printf("Queue is full.");
	} else {
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
		} else {
			rear++;
		}	
		a[rear]=item;
		
	}
}
int dequeue(){
	int item;
	if(front==-1 || front>rear)
	{
		printf("Queue is empty.");
		return -1;
	}
	else {
		item = a[front];
		front++;
		return item;
	}
}
void display(){
	int i;
	printf("The items in the stack are..\n");
	if(front == -1 & rear == -1){
		printf("Queue is empty.");
	}
	else {
		for(i = front; i <= rear; i++){
			printf(" %d ", a[i]);
		}
	}
}

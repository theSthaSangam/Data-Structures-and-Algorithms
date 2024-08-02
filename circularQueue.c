#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5

void enqueue(int item);
int dequeue();
void display();
int front = -1, rear = -1;
int a[MAXSIZE];
int count=0;
int main(){
	int n, i , opt;
	printf("...................Prepared by Sangam Shrestha.........................");
	
	do{
		printf("\n1 for enqueue operation: ");
		printf("\n2 for dequeue operation: ");
		printf("\n3 for display operation: ");
		printf("\n4 for exit: ");
		printf("\nEnter a choice: ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1: printf("Enter a number to enqueue: ");
			scanf("%d", &n);
			enqueue(n);
			break;
			
			case 2: n = dequeue();
			printf("The deleted item is %d", n);
			break;
			
			case 3: display();
			break;
			
			case 4: exit(0);
		}
	} while (opt != 4);
}
void enqueue(int item){
	if(count == MAXSIZE){
		printf("Stack is full.");
	} else {
		if(front == -1 && rear == -1){
			front = 0;
			rear =0;
		} else {
			rear = (rear+1)%MAXSIZE;
		}
		a[rear]=item;
		count++;
	}
}
int dequeue(){
	int item;
	if(count == 0){
		printf("QUEUE IS EMNPTY..");
		return -1;
	} else {
		item = a[front];
		front = (front+1)%MAXSIZE;
		count--;
		return item;
	}
}
void display(){
	printf("The items in the queue are: ");
	int i, j = count;
	for(i = front; j != 0; j--){
		printf(" %d ", a[i]);
		i = (i + 1)%MAXSIZE;
	}
}


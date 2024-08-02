#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 10

void push(int item);
int pop();
void display();
int top=-1;
int a[MAXSIZE];


int main(){
	int n, i, opt;
	do {
	 	printf("\n Enter a choice: ");
	    printf("\n 1 for push: ");
	    printf("\n 2 for pop: ");
	    printf("\n 3 for display: ");
	    printf("\n 4 for Exit.....");
	    scanf("%d", &opt);
	    switch(opt){
	    	case 1: 
			    printf("Enter a number to add: ");
	    	    scanf("%d", &n);
	    	    push(n);
	    	    break;
	    	case 2:
	    		n=pop();
	    		printf("The deleted item is %d", n);
	    		break;
	   		case 3:
	   			display();
	   			break;
	   		case 4: 
	   		    exit(0);
		}
	} while (opt != 4);
}
void push(int item){
	if(top == MAXSIZE-1){
		printf("Stack is full");
	} else{
		top++;
		a[top] =item;
	}
}
int pop(){
	int item;
	if(top == -1){
		printf("Stack is empty.");
		return -1;
	} else {
		item =a[top];
		top--;
		return item;
	}
}
void display(){
	printf("The elements inside the stack are..");
	int i;
	for(i = top; i >= 0; i--)
	{
		printf(" %d " , a[i]);
	}
}

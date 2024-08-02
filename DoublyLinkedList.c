#include <stdio.h>
#include <stdlib.h>

struct  dlist{
	struct dlist *prev;
	int info;
	struct dlist *next;
};

typedef struct dlist node;
node *start = NULL;
node *getnode();
void createlist(int n);
void traverse();
void insert_first();
void insert_last();
void insert_after();
void delete_first();
void delete_last();
void delete_after();

int main(){
	int ch, n;
	printf("...............................Preapred by Sangam Sherstha...........................");
	while(1){
		printf("\n1. Create a list");
		printf("\n2. Insert at begining..");
		printf("\n3. Insert at last..");
		printf("\n4. Insert after a node..");
		printf("\n5. delete of the first..");
		printf("\n6. Delete of the last..");
		printf("\n7. Delete after a node..");
		printf("\n8. Traverse");
		printf("\n9. Exit..");
		printf("\n Enter your choice..");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				if(start == NULL){
					printf("Enter the number of the node  to create..");
					scanf("%d", &n);
					createlist(n);
					traverse();
				} else{
					printf("The list is already created..");
				}
				break;
			case 2:
				insert_first();
				traverse();
				break;
			case 3:
				insert_last();
				traverse();
				break;
			case 4:
				insert_after();
				traverse();
				break;
			case 5:
				delete_first();
				traverse();
				break;
			case 6:
				delete_last();
				traverse();
				break;
			case 7:
				delete_after();
				traverse();
				break;
			case 8:
				traverse();
				break;
			case 9:
				exit(0);
		}
	}
	return 0;
}
node *getnode(){
	node *newnode;
	newnode = (node *)malloc(sizeof(node));
	printf("Enter the data..");
	scanf("%d", &newnode->info);
	newnode -> prev = NULL;
	newnode -> next = NULL;
	return newnode;
}
void createlist(int n){
	int i;
	node *newnode;
	node *temp;
	for(i = 0; i < n; i++){
		newnode = getnode();
		if(start == NULL){
			start = newnode;
		} else{
			temp = start;
			while(temp->next=NULL){
				temp = temp->next;
			}
			temp->next= newnode;
			newnode->prev=temp;
		}
	}	
}

void insert_first(){
	node *newnode;
	newnode = getnode();
	if(start == NULL){
		start = newnode;
	} else{
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
	}
}
void insert_last(){
	node *newnode, *temp;
	newnode = getnode();
	if(start == NULL){
		start = newnode;
	} else {
		temp = start;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
}
void insert_after(){
	node *newnode, *ptr;
	int val;
	newnode = getnode();
	printf("Enter the value after which the value is to be added..");
	scanf("%d", &val);
	ptr= start;
	while(ptr->info!=val){
		ptr=ptr->next;
	} 
	newnode->prev=ptr;
	newnode->next=ptr->next;
	ptr->next=newnode;
}
void delete_first(){
	node *temp;
	if(start== NULL){
		printf("The list is empty..");
		
	} else{
		temp = start;
		start = temp->next;
		start->prev=NULL;
		free(temp);
		printf("Node is deleted..");
		
	}
}
void delete_last(){
	node *temp;
	if(start == NULL){
		printf("List is empty..");
	} else {
		temp = start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->prev->next=NULL;
		free(temp);
		printf("The node is deleted.");
	}
}
void delete_after(){
	node *preptr, *ptr;
	int val;
	printf("\n Enter the node after which the node is to be deleted..");
	scanf("%d", &val);
	preptr=start;
	while(preptr->info!=val){
		preptr=preptr->next;
	}
	ptr=preptr->next;
	preptr->next=ptr->next;
	free(ptr);
}

void traverse(){
	node *temp;
	temp = start;
	printf("Contents are..\n");
	if(start == NULL){
		printf("The list is empty.");
	} else {
		while(temp != NULL){
			printf("%d-->", temp->info);
			temp = temp->next;
		}
	}
}
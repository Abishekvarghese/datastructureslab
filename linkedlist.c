#include<stdlib.h>
#include <stdio.h>
struct node
{
        int data;
        int link;
        struct node *next;
};
struct node *start=NULL;
void traverse(struct node *head){
	int c;
	struct node *temp=head;
        temp=(struct node *)malloc(sizeof(struct node));
	do{
	printf("Enter The Data Value: ");
	scanf("%d", &temp->data);
	printf("Do You Want to add another Data Value: Enter '1' for yes & '0' for No: ");
	scanf("%d", &c);
	}while(c==1);
	while(temp->data != 0){
	printf("%d->\n", temp->data);
	temp=temp->next;
	}
	printf("NULL\n");
	
}
void main () {
	int key,n,e,head;
	printf("Select an option for Operation\n");
	printf("Enter 1 for Traversing \n");
	printf("Enter 2 for Insert\n");
	printf("Enter 3 for Deletion\n");
	printf("Enter 4 for Merging\n");
	printf("Enter 5 for Searching\n");
	scanf("%d", &key);
	switch(key)
	{
		case 1: printf("You've Selected Traversing\n");
			int c;
	struct node *temp=head;
        temp=(struct node *)malloc(sizeof(struct node));
	do{
	printf("Enter The Data Value: ");
	scanf("%d", &temp->data);
	printf("Do You Want to add another Data Value: Enter '1' for yes & '0' for No: ");
	scanf("%d", &c);
	}while(c==1);
	while(temp->data != 0){
	printf("%d->\n", temp->data);
	temp=temp->next;
	}
			break;
		case 2: printf("You've Selected Insertion\n");
			break;
		case 3: printf("You've Selected Deletion\n");
			break;
		case 4: printf("You've Selected Merging\n");
			break;
		case 5: printf("You've Selected Searching\n");
			break;
		default: printf("Please Select A valid Option\n");
			break;
	}	
	
	
}

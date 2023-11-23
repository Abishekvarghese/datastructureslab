#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*start=NULL, *newnode, *ptr, *temp;
//insertion
int n;
void insert_start()
{
    newnode = (struct node *)malloc(sizeof(struct node *));
    if(newnode == NULL)
    {
        printf("Out of memory.");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &n);
    newnode -> data = n;
    newnode -> next = start;
    start = newnode;
}
//insert at end
void insert_end()
{
    newnode = (struct node *)malloc(sizeof(struct node *));
    if(newnode == NULL)
    {
        printf("Out of memory.");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &n);
    newnode -> data = n;
    if(start == NULL)  
    {  
        newnode -> next = NULL;  
        start = ptr;  
    }  
    else  
    {  
        ptr = start;  
        while(ptr -> next != NULL)  
        ptr = ptr -> next;  
        ptr -> next = newnode;  
        newnode -> next = NULL;  
    }  
}
//insert anywhere
void insert_after_node()
{
    int val, count = 0;
    if(start == NULL)  
    {  
        printf("List is empty.\n"); 
        return;
    }  
    newnode = (struct node *)malloc(sizeof(struct node *));
    if(newnode == NULL)
    {
        printf("Out of memory.");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &n);
    newnode -> data = n;
    newnode -> next = NULL;
    printf("Enter value of node to insert after: ");
    scanf("%d", &val);
    ptr = start;
    while(ptr != NULL)  
    {  
        if(ptr -> data == val)
        {
            count = 1;
            break;
        }    
        ptr = ptr -> next;  
    }  
    if(count == 1)
    {
        newnode -> next = ptr -> next;
        ptr -> next = newnode;
    }
    else
    {
        printf("Node not found.\n");
        return;
    }
}
void delete_start()
{
    if(start == NULL)  
    {  
        printf("List is empty.\n"); 
        return;
    }  
    printf("Deleted data: %d", start -> data);
    ptr = start;  
    start = start -> next;  
    free(ptr);  
}
void delete_end()
{
    if(start == NULL)  
    {  
        printf("List is empty.\n");  
    }  
    else if(start -> next == NULL)  
    {  
        printf("Deleted data: %d", start -> data);
        free(start);
        start = NULL;  
    }  
    else  
    {  
        ptr = start;   
        while(ptr -> next -> next != NULL)  
        {  
            ptr = ptr ->next;  
        }  
        printf("Deleted data: %d", ptr -> next -> data);
        free(ptr -> next);
        ptr -> next = NULL;
    }     
}
void delete_from_node()
{
    if(start == NULL)  
    {  
        printf("List is empty.\n");  
        return;
    }  
    int val, count = 0;
    printf("Enter value of node to delete: ");
    scanf("%d", &val);
    ptr = start;
    while (ptr != NULL)  
    {  
        if(ptr -> data == val)
        {
            count = 1;
            break;
        }
        ptr = ptr -> next;  
    }
    if(count == 1)
    {
        if(start -> data == val)  
        {  
            printf("Deleted data: %d", start -> data);
            temp = start;
            start = start -> next; 
            free(temp); 
            return;
        }  
        ptr = start;
        while (ptr -> next -> next != NULL)  
        {  
            if(ptr -> next -> data == val)
            {
                break;
            }
            ptr = ptr -> next;  
        }
        printf("Deleted data: %d", ptr -> next -> data);
        temp = ptr -> next;
        ptr -> next = ptr -> next -> next;
        free(temp);
        return;
    }    
    else
    {
        printf("No node found.\n");
        return;
    }
}
void display()  
{  
    ptr = start;   
    if(ptr == NULL)  
    {  
        printf("List is empty.\n");  
    }  
    else  
    {  
        printf("Linked List:\t\n");   
        while (ptr != NULL)  
        {  
            printf("%d\t", ptr->data);  
            ptr = ptr -> next;  
        }  
    }
    printf("\n");
}     

void main(){
	int choice,ch, ch1, lim;
	printf("\n\n\t\t\tEnter the linked list\n");
	printf("\n\nEnter the limit of the linked list: ");
	scanf("%d", &lim);
		for(int i=0; i<lim;i++){
		insert_start();
	}
	
	do{	
		printf("\n\n\t\t\tLinked List Operations\n");
		printf("\n\n");
		printf("Enter An Option: \n");
		printf("1 for insertion\n");
		printf("2 for deletion\n");
		printf("3 to display\n");
		printf("4 to exit\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: printf("\n\n\t\t\tYou've selected insertion\n");
		printf("Enter An Option: \n");
		printf("'1' for inserting at the front\n");
		printf("'2' for inserting at the end\n");
		printf("'3' for insertinf anywhere in the linked list\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
			printf("\n\n\t\t\tYou've selected inserting at the front\n");
			insert_start();
			display();
			break;
			case 2: 
			printf("\n\n\t\t\tyou've selected inserting at the end\n");
			insert_end();
			break;
			case 3:
			printf("\n\n\t\t\tYou've selected inserting anywhere\n");
			insert_after_node();
			break;
			default: 
			printf("Please select a valid option\n");
			break;
		}
		break;
			case 2: printf("\n\n\t\t\tYou've selected deletion\n");
			printf("Enter an Option\n");
			printf("1 for deleting from front \n");
			printf("2 for deleting from end \n");
			printf("3 for deleting from anywhere \n");
			scanf("%d", &ch1);
			switch(ch1){
				case 1: 
				printf("\n\n\t\t\tYou've selected to delete from the front\n");
				delete_start();
				break;
				case 2: 
				printf("\n\n\t\t\tYou've selected to delete from the end\n");
				delete_end();
				break;
				case 3: 
				printf("\n\n\t\t\tYou've selected to delete from the node\n");
				delete_from_node();
				break;
				default:
				printf("Please enter a valid option\n");
				break;
		}
		break;
		case 3: 
		display();
		break;
		case 4: 
		printf("\n\n\t\t\t*****Thank you*****\n\n\n");
		break;
		default: printf("Please enter a valid option\n");
		break;
	   }
	
	} while(ch >= 1 && ch <= 3);
}

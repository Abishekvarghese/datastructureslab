#include<stdio.h>
void main(){
	int key, opt, a[10], len, count=0, con;
	//input array
	printf("Enter the size of the array: ");
	scanf("%d", &len);
	printf("Enter the Elements in the array: \n");
	for(int i=0; i<len; i++){
		scanf("%d", &a[i]);
	}
	printf("================================================================================================\n");
	//menu for operation
	
	printf("Enter the type searching to perform\n");
	printf("\n");
	printf("1. Enter 1 for Linear Search\n");
	printf("2. Enter 2 for Binary Search\n");
	scanf("%d",&opt);
	printf("================================================================================================\n");
	//searching
	printf("\n");
	switch(opt){
		case 1: 
		printf("You've Selected Linear Searching\n");
		printf("Enter the Element to search: \n");
		scanf("%d", &key);
		printf("\n");
		for(int i=0; i<len; i++){
			if(a[i]==key){
				count++;
				printf("Element is found at %d: \n", i);
			}
		}
		if(count==0){
			printf("Element is not found\n");
			
		}
		printf("================================================================================================\n");
		break;
		case 2: 
		printf("You've Selected Binary Searching\n");
		printf("Enter the Element to search: \n");
		scanf("%d", &key);
		int i;
		int b=len/2;
		if(a[b]==key){
			printf("Element is found at %d:  \n", b);
		}
		else if(key<=a[b]){
			for(i=0; i<=b; i++){
				if(a[i]==key){
				count++;
				printf("Element is found at %d: \n", i);
			}
		}
		if(count==0){
			printf("Element is not found\n");	
			}
		}
		else{
			for(i=b; i<len; i++){
				if(a[i]==key){
				count++;
				printf("Element is found at %d: \n", i);
			}
		}
		if(count==0){
			printf("Element is not found\n");	
			}
		}
		printf("================================================================================================\n");
		break;
		default:
		printf("Invalid operation\n");
		break;
	}
	printf("Do you want to perform another search \n");
	printf("Enter 1 for yes\n");
	printf("Enter 2 for No\n");
	scanf("%d", &con);
	if(con==1){
		printf("================================================================================================\n");
	//menu for operation
	
	printf("Enter the type searching to perform\n");
	printf("\n");
	printf("1. Enter 1 for Linear Search\n");
	printf("2. Enter 2 for Binary Search\n");
	scanf("%d",&opt);
	printf("================================================================================================\n");
	//searching
	printf("\n");
	switch(opt){
		case 1: 
		printf("You've Selected Linear Searching\n");
		printf("Enter the Element to search: \n");
		scanf("%d", &key);
		printf("\n");
		for(int i=0; i<len; i++){
			if(a[i]==key){
				count++;
				printf("Element is found at %d: \n", i);
			}
		}
		if(count==0){
			printf("Element is not found\n");
			
		}
		printf("================================================================================================\n");
		break;
		case 2: 
		printf("You've Selected Binary Searching\n");
		printf("Enter the Element to search: \n");
		scanf("%d", &key);
		int i;
		int b=len/2;
		if(a[b]==key){
			printf("Element is found at %d:  \n", b);
		}
		else if(key<=a[b]){
			for(i=0; i<=b; i++){
				if(a[i]==key){
				count++;
				printf("Element is found at %d: \n", i);
			}
		}
		if(count==0){
			printf("Element is not found\n");	
			}
		}
		else{
			for(i=b; i<len; i++){
				if(a[i]==key){
				count++;
				printf("Element is found at %d: \n", i);
			}
		}
		if(count==0){
			printf("Element is not found\n");	
			}
		}
		printf("================================================================================================\n");
		break;
		default:
		printf("Invalid operation\n");
		break;
		
	}
	}
	
}

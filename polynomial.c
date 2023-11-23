#include <stdio.h>
struct poly {
	int exp;
	int coeff;
}p[20];


void main (){
	int len, i;
	printf("Enter the no.of terms: ");
	scanf("%d", &len);
	// input elements
	
	
	 for(int i=0; i<len; i++){
		printf("Enter the coefficient: ");
	 	scanf("%d", &p[i].coeff);
	 	printf("Enter the exponent: ");
	 	scanf("%d", &p[i].exp);
	 }
	 
	 // printing 
	 for(i=0; i<len; i++){
	 printf("%dx^%d + ", p[i].coeff, p[i].exp);
	 }
	 
	printf("\n");
	 printf("The polynomial matrix representation is\n");
	 for ( i=0; i<len; i++){
	 	printf("%d", p[i].coeff);
	 	printf("\t");
		
	 }
	 printf("\n");
	 for ( i=0; i<len; i++){
	 	printf("%d", p[i].exp);
	 	printf("\t");
		
	 }
	 
	 
	
} 

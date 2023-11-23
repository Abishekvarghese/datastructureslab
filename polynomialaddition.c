#include<stdio.h>
struct poly {
	int coeff;
	int exp;
}p1[10],p2[10],res[10];
void main(){
	int len,len2, i,j,k;
	printf("Enter the no.of terms of 1st polynomial: ");
	scanf("%d", &len);
	// input elements
	
	
	 for(int i=0; i<len; i++){
		printf("Enter the coefficient: ");
	 	scanf("%d", &p1[i].coeff);
	 	printf("Enter the exponent: ");
	 	scanf("%d", &p1[i].exp);
	 }
	 
	 // printing 
	 for(i=0; i<len; i++){
	 printf("%dx^%d + ", p1[i].coeff, p1[i].exp);
	 }
	 
	printf("\n");
	 
	 	
// 2nd polynomial
	
	 	
	printf("Enter the no.of terms of 2nd polynomial: ");
	scanf("%d", &len2);
	// input elements
	
	
	 for(int i=0; i<len2; i++){
		printf("Enter the coefficient: ");
	 	scanf("%d", &p2[i].coeff);
	 	printf("Enter the exponent: ");
	 	scanf("%d", &p2[i].exp);
	 }
	 
	 // printing 
	 for(i=0; i<len2; i++){
	 printf("%dx^%d + ", p2[i].coeff, p2[i].exp);
	 }
	 
	printf("\n");
	 
	 	
// matrix representation of polynomials

	//1st polynomial
	printf("The polynomial matrix representation of 1st polynomial is\n");
	 for ( i=0; i<len; i++){
	 	printf("%d", p1[i].coeff);
	 	printf("\t");
		
	 }
	 printf("\n");
	 for ( i=0; i<len; i++){
	 	printf("%d", p1[i].exp);
	 	printf("\t");
	 	}
	 	printf("\n");
	 	
	 // 2nd polynomial
	 printf("The polynomial matrix representation of 2nd polynomial is\n");
	 for ( i=0; i<len2; i++){
	 	printf("%d", p2[i].coeff);
	 	printf("\t");
		}
	 printf("\n");
	 for ( i=0; i<len2; i++){
	 	printf("%d", p2[i].exp);
	 	printf("\t");
	 	}
	 	printf("\n");
	 	
// adding polynomials
	i,j,k=0;
	while(i<len && j<len2){
		if(p1[i].exp>p2[j].exp){
			res[k].coeff=p1[i].coeff;
			res[k].exp=p1[i].exp;
			i++;
			/*res[k].coeff=p2[i].coeff;
			res[k].exp=p2[i].exp;
			i++;
			j++;*/
		}
		else if(p1[i].exp<p2[j].exp){
			res[k].coeff=p2[j].coeff;
			res[k].exp=p2[j].exp;
			j++;
			/*res[k].coeff=p1[i].coeff;
			res[k].exp=p1[i].exp;
			i++;
			j++;
				*/
			}
		else{
			res[k].coeff=p1[i].coeff+p2[j].coeff;
			res[k].exp=p1[i].exp;
			i++;
			j++;
			k++;
		}
	}
	
	// adding remaining parts
	while(i<len){
	res[k].coeff=p1[i].coeff;
	res[k].exp=p2[i].exp;
	i++;
	k++;
	}
	while(j<len2){
	res[k].coeff=p2[j].coeff;
	res[k].exp=p2[j].exp;
	j++;
	k++;
	}
// printing

	printf("The sum of the two polynomials: \n ");
	printf("\n");
	
	 for ( i=0; i<k; i++){
	 	printf("%d", res[k].coeff);
	 	printf("\t");
		}
	 printf("\n");
	 for ( i=0; i<k; i++){
	 	printf("%d", res[k].exp);
	 	printf("\t");
	 	}
	 	printf("\n");
}









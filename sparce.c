#include <stdio.h>
void main (){
	int i,j,r, c, a[20][20], result[3][10]; 
	int k=0;
	printf("Enter the no.of rows: ");
	scanf("%d", &r);
	printf("Enter the no.of columns: ");
	scanf("%d", &c);
	printf("Enter The Elements:");
	for (int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	printf("The sparse matrix is");
	printf("\n");
	for (int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d", a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(a[i][j]!=0){
					result[0][k]=i;
					result[1][k]=j;
					result[2][k]=a[i][j];
					k=k+1;
				}
			}
		}
	
	// printing answer
		printf("The non zero elements in the matrix are:");
		printf("\n");
	
		for (int i=0; i<3; i++){
			for(int j=0; j<k; j++){
				printf("%d", result[i][j]);
				printf("\t");
			}
			printf("\n");
		}
		
}

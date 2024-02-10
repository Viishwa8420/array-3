#include<stdio.h>
main()
{

int rows, cols, i ,j;
printf("Enter the size of rows : ");
scanf("%d",&rows);

printf("Enter the size of cols : ");
scanf("%d",&cols);

int arrA[rows][cols],arrB[rows][cols];

printf("\nEnter the elements of arrayA :\n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("A[%d][%d] =",i,j);
		scanf("%d",&arrA[i][j]);
	}
}
printf("\nEnter the elements of arrayB :\n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("B[%d][%d] =",i,j);
		scanf("%d",&arrB[i][j]);
	}
}
int arrC[rows][cols];
	for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		arrC[i][j] = arrA[i][j]+ arrB[i][j];
	}
}
	printf("\nArrayC's elements:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t",arrC[i][j]);
		}
		printf("\n");
	}
}

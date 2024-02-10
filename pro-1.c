#include<stdio.h>
main()
{

int rows, cols, i ,j;
printf("Enter the size of rows : ");
scanf("%d",&rows);

printf("Enter the size of cols : ");
scanf("%d",&cols);

int arr[rows][cols];

printf("Enter the elements of array :\n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("arr[%d][%d] =",i,j);
		scanf("%d",&arr[i][j]);
	}
}
float sum=0,avg;
	for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		sum += arr[i][j];
	
	}
}
	avg = sum/ (rows*cols);
	printf("Average of an array : %.2f",avg);
}

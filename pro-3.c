#include<stdio.h>
main()
{

int rows, cols, i ,j;
printf("Enter the size of rows : ");
scanf("%d",&rows);

printf("Enter the size of cols : ");
scanf("%d",&cols);

int arr[rows][cols];

printf("\nEnter the elements of array :\n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("arr[%d][%d] =",i,j);
		scanf("%d",&arr[i][j]);
	}
}
int sum=0;
	for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
			if (i == j)
			 {
                sum += arr[i][j];
		   	}
}
}
	printf("\nSum of the diagonal elements of an array: %d\n",sum);

}

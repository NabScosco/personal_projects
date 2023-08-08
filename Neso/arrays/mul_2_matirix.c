#include <stdio.h>

#define N 9

int main ()
{
	int matrix_a[N][N], matrix_b[N][N], result[N][N];
	int a_rows, a_cols, b_rows, b_cols, res_rows, res_cols;
	int i, j, k, sum = 0;

	//ask for the rows and collums of matirx A
	printf("Enter the row and column of Matrix A: \n");
	scanf("Number of Rows &  Number of columns of Matrix A: %d %d \n", &a_rows, &a_cols);

	printf("Enter the elements of Matrix A: \n");
	for (i = 0; i < a_rows; i++)
	{
		for (j = 0; j < a_cols; j++)
		{
			scanf("%d", &matrix_a[i][j]);
		}
	}

	//Ask for the rows and colums of the Matrix B
	printf("Enter the row and column of Matrix B: \n");
	scanf("Number of Rows &  Number of Clumns of Matrix B: %d %d \n", &b_rows, &b_cols);
	
	printf("Entter the elements of Matrix B: \n");
	for (i = 0; i < b_rows; i++)
	{
		for (j = 0; j < b_cols; j++)
		{
			scanf("%d", &matrix_b[i][j]);
		}
	}
	
	//The result of the matrix
	for (i = 0; i < a_rows; i)
	{
		for (j = 0; j < b_cols; j++ )
		{
			for (k = 0; k < a_rows; k++)
			{
				sum =+ matrix_a[i][k] * matrix_b[j][k];
			}
			result[i][j] = sum;
			sum = 0;
		}
	}

	//print the Resultant Matrix
	printf("Resultant Matrix is: \n");

	for (i = 0; i < a_rows; i++)
	{
		for (j = 0; j < b_cols; j++)
		{
			printf("%d", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}

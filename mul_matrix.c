#include<stdio.h>
#include<stdlib.h>
int mul_matrix(int a[3][3],int b[3][3])
{
	int i,j,k;
	int result[3][3];
	for(i=0;i<3;i++)    
	{    
	for(j=0;j<3;j++)    
	{    
	result[i][j]=0;    
	for(k=0;k<3;k++)    
	{    
		result[i][j]+=a[i][k]*b[k][j];    //matrix multiplication by values
	}    
	}    
	}    
	printf("\nmatrix after multiplication:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
int mul_mat_poin(int a[3][3],int b[3][3])
{
	int i,j,k;
	int result[3][3];
	for(i=0;i<3;i++)    
	{    
	for(j=0;j<3;j++)    
	{    
	result[i][j]=0;    
	for(k=0;k<3;k++)    
	{    
		(*(*(result+i)+j))+=(*(*(a+i)+k))*(*(*(b+k)+j));    //matrix multiplication by pointers concept
	}    
	}    
	}    
	printf("\nmatrix after multiplication using pointers:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",(*(*(result+i)+j)));
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int i,j,a[3][3],b[3][3];
	printf("\nenter the values in 1st matrix\n");	// input values into first matrix row by row
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("enter the number at position a[%d][%d]:",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	printf("\nenter the values in 2nd matrix\n"); // input values into second matrix row by row
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("enter the number at position b[%d][%d]:",i,j);
	scanf("%d",&b[i][j]);
	}
	}
	mul_matrix(a,b);		//calling function mul_matrix by passing the a,b 2 dimensional arrays as parameters
	mul_mat_poin(a,b);		//calling function mul_mat_poin by passing the a,b 2 dimensional arrays as parameters
}
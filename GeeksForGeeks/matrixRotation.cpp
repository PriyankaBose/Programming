/*===============================================================================================================
 *Author: Priyanka Bose
 *Date: 31/08/2014
 *Version: 1.0
 *Description: This program serves the purpose of rotating a matrix to any angle which is multiples of 90 degrees.
 *===============================================================================================================*/
#include<iostream>
#include<cstdio>

using namespace std;
#define MAXROW 12
#define MAXCOL 12

int originalMat[MAXROW][MAXCOL],rotatedMat[MAXROW][MAXCOL];

// It initializes matrix to zeroes
void initializeMatrix(int r, int c, int matrix[][MAXCOL])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			matrix[i][j]=0;
		}
	}
}

// It displays the elements of a matrix
void displayMatrix(int r, int c, int matrix[][MAXCOL])
{
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}

// Its rotates the matrix by replacing columns starting from the last with the rows starting from first
void matrixRotation(int *presentRow,int *presentCol,int angle)
{	
	int loop = angle/90;
	int i,j,k,t;
	loop=loop%4;
	
	while(loop>=1)
	{
		k=*presentRow-1;
		
		for(i=0;i<*presentRow;i++)
		{
			for(j=0;j<*presentCol;j++)
			{
				rotatedMat[j][k]=originalMat[i][j];
			}
			k--;
		}
		
		t=*presentCol;
		*presentCol=*presentRow;
		*presentRow=t;
		
		initializeMatrix(*presentRow,*presentCol,originalMat);

		for(i=0;i<*presentRow;i++)
		{
			for(j=0;j<*presentCol;j++)
			{
				originalMat[i][j]=rotatedMat[i][j];
			}
		}
		
		initializeMatrix(*presentRow,*presentCol,rotatedMat);
		loop--;
	}
}


// Driver Module
int main()
{
	int i,j,k,r,c,angle;
	printf("Enter the diemension of the Matrix: ");
	scanf("%d %d",&r,&c);
	printf("Enter the angle of rotation(should be multiples of 90): ");
	scanf("%d",&angle);
	printf("\nEnter the elements of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&originalMat[i][j]);
		}
	}
	
	printf("The original matrix is: \n");
	displayMatrix(r,c,originalMat);
	matrixRotation(&r,&c,angle);
	printf("\n \n");
	printf("The matrix after %d rotation is: \n",angle);
	displayMatrix(r,c,originalMat);
	return 0;
}
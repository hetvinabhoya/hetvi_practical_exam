// q-5. WAP to find a cube of all elements from a given 2D array.

#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter Array's size : ");
	scanf("%d",&n);
	
	int a[n];
	int i,j;
	int cube=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[n]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cube = a[i][j] * a[i][j] * a[i][j];
				printf("a[%d][%d] = %d",i,j,cube);

		}
	}
	
}

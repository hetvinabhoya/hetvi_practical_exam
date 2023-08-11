// q-4. WAP to print all odd numbers from a given 1D array using pointer.

#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter array's size : ");
	scanf("%d",&n);
	
	int i,a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[n]);
	}
	
	int *ptr[n];
	
	ptr[n] = &a[n];
	
	printf("Odd numbers :\n");
	
	for(i=0;i<n;i++)
	{
      if(*ptr[n]%2!=0)
      {
      	printf("%d\n",*ptr[n]);
      	
	  }

    }

}

// q-3. Write all leap years from a given range into a text file.

#include<stdio.h>

void main()
{
	FILE *leapyear;
	
	leapyear = fopen("leap.txt","w");
	
	int i=2020,j=2040;
	
	if(leapyear != NULL)
	{
		printf("File created successfully...");
		if(i=2020 || i<=j)
		{
			if(i%=4)
			{
				fprintf(leapyear,"leap year : %d",i);	
			}
		}
	}
	else
	{
		printf("File can't create...");
	}
	
}

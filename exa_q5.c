//q-5. WAP to find the minimum number from the given 3 numbers.

#include<stdio.h>

void main()
{
	int num_1,num_2,num_3;
	
	printf("Enter First number : ");
	scanf("%d",&num_1);
	
	printf("Enter Second number : ");
	scanf("%d",&num_2);
	
	printf("Enter Third number : ");
	scanf("%d",&num_3);

	int Minimum=0;
	
	Minimum =(num_1<num_2)?((num_1<num_3)?num_1:num_3):((num_2<num_3)?num_2:num_3);
	
	printf("This is Minimum value : %d",Minimum);

	

}

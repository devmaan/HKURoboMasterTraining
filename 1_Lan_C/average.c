#include <stdio.h>
#include "IDKWhyThisIsNecessary.h"

int average(float temp)
{
	float temp1;
	temp1=(float)temp/10;
	printf("Average of your values:%f",temp1);
}

int main()
{
	int temp;
	float temp1;
	temp1=0;
	temp=0;
	printf("Enter 10 number:");
	for(int i=0; i<10; i++){
		scanf("%d", &temp);
		temp1 += temp;
		printf("%f\n", temp1);
		printf("number remain to be entered:%d\n",(9-i));
}
	printf("\nAccumulated Value:%f\n",temp1);
	average(temp1);
	return 0;
}

#include<stdio.h>

int main()
{
	int i,n;
	float sum = 0,average;
	puts("Enter 10 integers:\n");
	for (i = 0, i<10, i+=1)
	{
		scanf("%d", &n);
		sum += n;
	}
	average = sum/10;
	printf("%f", average);
	return 0;
} 

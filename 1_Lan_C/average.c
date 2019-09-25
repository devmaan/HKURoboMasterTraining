/*The file take 10 integers from input*
  and then promote the average of the 10 inputs
 * /
#include <stdio.h>
float average(int number[10])
{
	float x=0;
	int i;
	for(i=0;i<10;i++)
	{
		x+=number[i];
	}
	x/=10;
	return x;
}

int main()
{
	int i,n[10];
	printf("Enter 10 integers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("%f",average(n));
	return 0;
}

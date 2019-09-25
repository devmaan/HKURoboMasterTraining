//Zhang Yixing

#include <stdio.h>

typedef enum myenum
{
	ERR, SUCCESS, DONE
}Myenum;

typedef struct mystruct
{
	Myenum myenum1;
	int i;
	float * j;
}Mystruct;

float taverage()
{
	float total = 0;
	int j;
	printf("Enter 10 integers: \n");
	for (int i = 0; i < 10; i++){
		scanf("%d", &j);
		total += j;
	}
	return total/10;
}

#include<stdio.h>
#include<string.h>

/* Name: Qiu Zeyu */

typedef enum Myenum
{
 ERR, SUCCESS, DONE
}Myenum;

typedef struct Mystruct
{
	enum Myenum DONE;
	int n;
	float m;
}Mystruct;

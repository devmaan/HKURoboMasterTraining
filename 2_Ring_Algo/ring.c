#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void menu(int * current_angle)	{
	int angle = 0;
	char input[100];
	printf("Enter the angle: ");
	scanf(" %s", input);
	int i, n = 0;
	for (i = 0; input[i] != '\0'; i++)	{
		if (isalpha(input[i]))
			exit(0);
		if (input[i] == '-' || input[i] == '+')
			n++;
		}
	
	angle = atoi(input);
	(*current_angle) += angle;
	
	if ((*current_angle) >= 180)	{
		if (((*current_angle) / 180) % 2 == 0)
			*current_angle = (*current_angle) % 180;
		else	{
			*current_angle = 180 - ((*current_angle) % 180);
			*current_angle *= -1;
			}
		}
	if ((*current_angle) == -180)
		(*current_angle) = 180;
	
	printf("The current angle = %d\n", *current_angle);
	return;
	}

int main()	{
	int current_angle = 0;
	while (1)	
		menu(&current_angle);
	return 0;
	}

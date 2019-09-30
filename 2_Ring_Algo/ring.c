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
	/*i--;
	int length = i + 1 - n;
	for (; i >= 0; i--)	{
		if (input[i] == '+' || input[i] == '-')	
			continue;
		else
			angle += (input[i] - '0') * pow(10, length - i - n - 1);
		}
	if (n)
		angle *= -1;
	//Now the angle input is stored within the angle variable
	*/
	angle = atoi(input);
	(*current_angle) += angle;
	//If angle cumulatively is larger than 180 degrees, we check the quotient
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
	
	
	//angle = atoi(input);
	//*current_angle = ((*current_angle) % 360) - 180;
	printf("The current angle = %d\n", *current_angle);
	return;
	}

int main()	{
	int current_angle = 0;
	while (1)	
		menu(&current_angle);
	return 0;
	}

//Assignment 2 for RoboMaster Automation training
//Zhang Yixing

#include <stdio.h>

int main()
{
  int angle = 0, input;
  printf("Angle ranges from -179 to 180 and the initial angle is %d.\n\
Please enter the angle to turn:\n", angle);
  while(scanf("%d", &input))
  {
    angle = (angle + 179 + input) % 360 - 179;
    if(angle < -179)
    {
      angle += 360;
    }
    printf("Current angle is %d.\n", angle);
    printf("Please enter the next angle:\n");
  }
  printf("You entered a non-integer. Program ends.\n");
  return 0;
}

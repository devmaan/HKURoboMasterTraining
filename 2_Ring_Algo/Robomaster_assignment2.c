#include "Robomaster_assignment2.h"

int modular(int angle, int number){
  number = (number<0)? 360+(number%360) : number%360;
  angle+= number;
  if (angle>180) angle-=360;
  return angle;
}

int checkInteger (char * input){
  for (int i =0;i<SIZE_USERINPUT && input[i] !='\0';i++){
    if (!isdigit(input[i]) && (i!=0 || input[i]!='-')){
      return 0;
    }
  }
  return 1;
}

int main(){
  char input [SIZE_USERINPUT];
  int number,angle =0;
  printf("Input :");
  scanf("%s",input);
  while (checkInteger (input)){
    int number = atoi(input);
    angle = modular(angle,number);
    printf("Output:%d\n",angle);
    printf("Input :");
    scanf("%s",input);
  }
  printf("Exit\n");
  return 0;
}

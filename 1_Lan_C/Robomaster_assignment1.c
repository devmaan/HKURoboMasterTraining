#include "Robomaster_assignment1.h"

// detail implementation of function calculating the average
float calculate_average(int userInput [10]){
  // calculate the sun of input
   int sum = 0;
   for (unsigned char i=0; i<SIZE_USERINPUT;i++){
     sum += userInput[i];
   }
   //calculate the average
   return sum/(float)10;
}

int main(){
  int userInput [10];
  //prompt user input
  printf("Enter 10 integers:\n");
  for (unsigned char i=0;i<SIZE_USERINPUT;i++){
    scanf("%d",&userInput[i]);
  }
  //calculate average and output
  float average = calculate_average(userInput);
  printf("The average value is %.2f\n",average);
}

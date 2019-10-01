// author: Yang Yuezhi 杨越之 3035603033
#ifndef ROBOMASTER_ASSIGNMENT1_H
#define ROBOMASTER_ASSIGNMENT1_H
#include <stdio.h>


// SIZE_USERINPUT gives the number of integer users are allowed to input
const unsigned char SIZE_USERINPUT = 10;

// a function to calculate the average
float calculate_average(int [10]);

//a struct named dummystruct as required in the question
struct dummystruct{
  float * floarPtr;
  int integer;
  enum {
    ERR,SUCCESS,DONE
  }state;
};

#endif

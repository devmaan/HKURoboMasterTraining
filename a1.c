#include<stdio.h>
  
 int main ()
 {
 int n, i;
 float sum = 0;
 float average;
 puts("Enter 10 integers:\n");
 for (i = 0; i<10; i += 1)
 {
 scanf("%d", &n);
 sum += n;
 }
 average = sum/10;
 printf("%f", average);
 return 0;

 }


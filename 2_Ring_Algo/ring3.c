#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char ang[10];
  char inp[10];
int angle=0,input;


while(1){
  scanf("%d", &input);


angle=angle+input;
angle=angle%360;

if(angle>180){
angle-=360;
}
else if(angle<-180){
angle+=360;
}
sprintf(ang,"%d",angle);
printf ("%s\n",ang);
}

return 0;
}

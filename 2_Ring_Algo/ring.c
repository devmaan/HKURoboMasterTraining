#include  <stdio.h>
#include <stdlib.h>

int main(){

    int angle=0, input;


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
printf("%d\n", angle);
}


return 0;
}

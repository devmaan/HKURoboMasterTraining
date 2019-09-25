#include <stdio.h>
#include <math.h>

int main()
{
	int degree=0;
	int enter;
	
    while(1){
        if(!scanf("%d",&enter)){
            break;
        }

        
        degree=  (degree+enter)%360;

        if(degree>180){
            degree=degree-360;
        }else if(degree<-179){
            degree+=360;
        }
        printf("%d\n",degree);
    }
    return 0;
}


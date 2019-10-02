#include <stdio.h>

int main()
{
    int a,sum;
    sum = 0;
    printf(":");
    while(scanf("%d",&a))
    {
        a%=360;
        sum+=a;
        if(sum>180)
        {
            sum-=360;
        }
        else if(sum<-179)
        {
            sum+=360;
        }
        printf("%d\n",sum);
        
    }
    return 0;
}

#include <stdio.h>
#include "uselessheader.h"

float average(){

    printf("Enter 10 integers: ");

    int i = 1;
    int a = 0;
    float sum = 0;
    for(i=1;i<=10;i++){
        scanf("%d",&a);
        sum = sum + a;
    }
    return sum/10;
}

int main()
{
    printf("%f", average());

    return 0;
}

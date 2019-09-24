#include <stdio.h>
#include <stdlib.h>
#include "Task.h"

double func(void)
{
    puts("Enter 10 integers:");
    double a[10], sum = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    return sum / 10;
}

int main()
{
    double aver;
    aver = func();
    printf("%lf", aver);
    return 0;
}

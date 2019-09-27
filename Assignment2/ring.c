//Lam Kai I

#include "stdio.h"
#include <stdlib.h>
int main(){
    int current = 0;
    int input;
    char term;
    while(1){
        if(scanf("%d%c", &input, &term) != 2 || term != '\n'){
            exit(0);
        }

        current = (current + input) %360;
        while ( current > 180 ){
            current = current - 360;
        }

        while( current <= -180 ){
            current = current + 360;
        }

        printf("%d\n",current);
    }
}
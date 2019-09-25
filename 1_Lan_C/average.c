/*The file take 10 integers from input
  and then promote the average of the 10 inputs
*/

#include <stdio.h>

float avg(){
    printf("Enter 10 integers: ");
    int s = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &i);
        s = s + i;
    }
    float avg = s / 10.0;
    return avg;
}

int main(){
    float r = avg();
    printf("%f", r);
    return 0;
}
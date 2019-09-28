#include <stdio.h>

int storage;

int control(){
	int temp;
	printf("--------------------------------------------------------\n");
	printf("If continue, type 1. If not, type 0. Please type:");
	scanf("%i", &temp);
	printf("%i\n", temp);
	return temp;	
}

int input(){
	int temp;
	printf("please type your input:");
	scanf("%i", &temp);
	storage += temp;
	printf("present storage:%i\n", storage);
	return storage;
}

int calculas(int storage){
	int output=0;
	if(storage%360<181)output=storage%360;
	else output=((storage%360)-360);
	printf("output:%i\n", output);
	return 0;
}

int main(){
	calculas(input());
	while(control()==1)calculas(input());
	return 0;
}
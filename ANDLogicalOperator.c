#include <stdio.h>
#include <stdbool.h>

int main(){

    float temp = 15;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }
    return 0;
}
/*
Logical operators = && (AND) checks if two conditions are true
*/
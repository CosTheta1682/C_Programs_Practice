1)Write a complete C program that evaluates the expression 19 + 4x + 3x2 + 9x3 + 8x4 for the value of x to be 3 and  prints the value.

#include <stdio.h>
 int main(){
 int x=3; 
int result;
result= 19+4*x+3*x*x+9*x*x*x+8*x*x*x*x;
    printf("The result is:%d \n", result);
    return 0;
}


Write a complete C program that reads a 3-digit  +ve (decimal) integer number from the user and prints the sum of its digits. If at the time of execution the number given by the user is not a 3-digit +ve integer, the program just prints error message.

#include <stdio.h>
int main(){
int n,h,t,o;
int sum=0;
do {
        printf("Enter a 3-digit positive number: ");
        scanf("%d", &n);

        if (n < 100 || n > 999) {
            printf("Invalid input. Please try again.\n");
        }
    } while (n < 100 || n > 999);
h = n / 100;
    t = (n / 10) % 10;
    o = n % 10;

    // Compute sum
    sum = h + t + o;

    printf("The sum of the digits of %d is: %d\n", n, sum);

    return 0;
}
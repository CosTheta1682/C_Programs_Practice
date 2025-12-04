#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, rev = 0, sign = 1;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    if (n < 0) {
        sign = -1;
        n = -n;  // work with positive number
    }

    while (n > 0) {
        rev = rev * 10 + (n % 10);  // append last digit
        n = n / 10;                 // remove last digit
    }

    rev *= sign;  // restore sign if negative

    printf("The reversed number is %d\n", rev);

    return 0;
}

#include <stdio.h>
int myIncrement(int n);
int myDecrement(int n);
unsigned int myAdd(unsigned int n1, unsigned int n2);
int mySubtract(unsigned int n1, unsigned int n2);
unsigned int myMultiply(unsigned int n1, unsigned int n2);
unsigned int myDivide(unsigned int n1, unsigned int n2);
unsigned int myRemainder(unsigned int n1, unsigned int n2);
int main(){
    int n;
    unsigned int n1,n2,choice;
    printf("Enter n1:");
    scanf("%u",&n1);
    printf("Enter n2:");
    scanf("%u",&n2);
    printf("Enter desired operation: \n 1 for addition \n 2 for subtraction\n 3 for multiplication \n 4 for division \n 5 to find remainder\n");
    scanf("%u", &choice);

    switch(choice)
    {
        case 1 :
            printf("The sum is:%u \n",myAdd(n1, n2));
            break;

        case 2 :
            printf("The subtraction  is:%d \n",mySubtract(n1, n2));
            break;

        case 3:
            printf("The multiplication is %u \n" , myMultiply( n1, n2));
            break;

        case 4 :
            printf("The division is:%u \n",myDivide(n1, n2));
            break;

        case 5:
            printf("The remainder is is %u \n" , myRemainder(n1, n2));
            break;

        default:
            printf("Invalid choice.\n");
    }
}

int myIncrement(int n){
    return ++n;
}

int myDecrement(int n){
    return --n;
}

unsigned int myAdd(unsigned int n1, unsigned int n2){
    if (n2 == 0){
        return n1;
    }
    return myIncrement(n1 + myDecrement(n2));
}

int mySubtract(unsigned int n1, unsigned int n2){
    if (n2 == 0){
        return n1;
    }
    return myDecrement(n1 - myDecrement(n2));
}

unsigned int myMultiply(unsigned int n1, unsigned int n2){
    if (n2==0){
        return 0;
    }
    return myAdd(n1,myMultiply(n1,(n2-1)));
}
unsigned int myDivide(unsigned int n1, unsigned int n2){
    if (n2==0){
        printf("Invalid");
        return 0;
    }
    if (n1<n2){
        return 0;    
    }
    return 1+ myDivide((n1-n2),n2);
}
unsigned int myRemainder(unsigned int n1, unsigned int n2){
  if (n2==0){
        printf("Invalid");
        return 0;
    }
    if (n1<n2){
        return n1;
    }
    return myRemainder(n1-n2,n2);
}

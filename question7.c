7)//Write a complete C program that reads a (decimal) integer number which has maximum 3 digits in it. The program then prints the reverse of the given number. That is, the program computes the number whose digits are just reverse of the digits of the given number, and prints that number.
#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,h,t,o;
    int rev;
         printf("Enter a 3 digit number:");
         scanf("%d",&n);
          if(n<-999 || n>999)
          {
          printf("Invalid input try again");
          }
   h=(abs(n)/100)%10;
   t=(abs(n)/10)%10;
   o=(abs(n))%10;
   rev=o*100+t*10+h;
   if (n<0){
       rev=-rev;
   }
printf("The no reversed is %d",rev);
    return 0;
}
          

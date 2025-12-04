#include<stdio.h>
int myStrLen(char str[]);
int main(){
	char ar[50];
	printf("Enter a string:");
	scanf("%s",ar);
	printf("Length of the string is : %d",myStrLen(ar));
	return 0;
}
int myStrLen(char str[]){
	int len=0;
	int i;
	for (i=0 ; str[i]!='\0' ; i++){
	len = i;
	}
	return len+1;
}





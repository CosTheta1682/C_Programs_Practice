#include <stdio.h>
int isPalindrome(char str[ ]);
int main(){
	char str[100];
	printf("Enter string:");
	scanf("%s", str);
	printf("So it returns : %d ", isPalindrome(str));
	return 0;
}
int isPalindrome(char str[ ]){
int len=0;
        int i;
	int j;
	int x=1;
        for (i=0 ; str[i]!='\0' ; i++){
        len ++;
	}
	for (j=0 ; j<len ; j++){
		if (str[j]!=str[len-j-1]){
			x=0;
			break;
		}
	}
return x;
}




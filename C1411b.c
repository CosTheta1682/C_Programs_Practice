#include<stdio.h>
void myStrCpy(char dstr[ ], char sstr[ ]);
int main(){
	char sstr[100];
	char dstr[100];
	printf("Enter a string:");
	scanf("%s",sstr);
	myStrCpy(dstr,sstr);
	printf("The string put in was %s .\n",dstr);
	return 0;
}
void myStrCpy(char dstr[ ], char sstr[ ]){
	int i=0;
	int j=0;
	while(sstr[i]!='\0'){
		dstr[j]=sstr[i];
		i++;
		j++;
	}
}
			
		

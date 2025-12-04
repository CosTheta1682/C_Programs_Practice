#include <stdio.h>
void myStrCat(char dstr[ ], char sstr[ ]);
int main(){
	char sstr[100] ;
	char dstr[100];
	printf("enter first string: ");
	scanf("%s", dstr);
	printf("enter second string: ");
	scanf("%s" , sstr);
	// ffr: This is how we call from a void function. Void functions have no return value.
	myStrCat(dstr , sstr);
	printf("The appendedstring is %s .\n", dstr);
		return 0;
}
void myStrCat(char dstr[ ], char sstr[ ]){
	int i=0;
	int j=0;
	// ffr : This loop says"You've reached the end of the first string"
	while (dstr[i]!='\0'){
		i++;
	}
	//for future refernce: This copies sstr into dstr
	 while(sstr[j]!='\0'){
                dstr[i]=sstr[j];
                i++;
                j++;
	 }

}


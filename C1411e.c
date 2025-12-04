#include <stdio.h>
int myStrCmp(char s1[ ],char s2[ ]);
int main(){
    char s1[50];
    char s2[50];
    printf("Enter first string:");
    scanf("%s", s1);
    printf("Enter second string:");
    scanf("%s", s2);
    printf("Result of comparsion: %d" , myStrCmp (s1, s2));
    return 0;
}
int myStrCmp(char s1[ ], char s2[ ]){
    int i=0;
    while (s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            if (s1[i]<s2[i])
                return -1;
             else 
                return 1;
        }
        i++;
    }
    if (s1[i]=='\0' && s2[i]=='\0')
    return 0;
    if (s1[i]=='\0')
    return -1;
    
    return 1;
}
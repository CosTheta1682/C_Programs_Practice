#include <stdio.h>
#include <ctype.h> 
int main() {
    int i = 0, j = 0, k = 0, l = 0, m = 0;
    char str1[100], str2[100];
    char com[100], ost1[100], ost2[100];
    int found;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
    str1[i]=tolower(str1[i]);
    }
    for (j = 0; str2[j] != '\0'; j++)
    {
    str2[j] = tolower(str2[j]);
    }
    // --- COMMON CHARACTERS ---
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j]) {
                int already = 0;
               for (int x = 0; x < k; x++) {
               if (com[x] == str1[i]) {
               already = 1;
               break;
    }
}
if (already)
    continue; // skip adding if already present
                com[k++] = str1[i];
                break;  // stop checking further once matched
            }
        }
    }
    com[k] = '\0';  //terminate common string

    // --- UNIQUE IN FIRST STRING ---
    for (i = 0; str1[i] != '\0'; i++) {
        found = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {  // not found in str2
        int already = 0;
      for (int x = 0; x < l; x++) {
      if (ost1[x] == str1[i]) {
      already = 1;
      break;
    }
}
if (already)
    continue;

            ost1[l++] = str1[i];
        }
    }
    ost1[l] = '\0';  //  terminate

    // --- UNIQUE IN SECOND STRING ---
    for (i = 0; str2[i] != '\0'; i++) {
        found = 0;
        for (j = 0; str1[j] != '\0'; j++) {
            if (str2[i] == str1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {  // not found in str1
        int already = 0;
        for (int x = 0; x < m; x++) {
        if (ost2[x] == str2[i]) {
        already = 1;
        break;
    }
}
if (already)
    continue;

            ost2[m++] = str2[i];
        }
    }
    ost2[m] = '\0';  // terminate

    // --- OUTPUT ---
    printf("\nCommon letters: %s", com);
    printf("\nOnly in first: %s", ost1);
    printf("\nOnly in second: %s", ost2);

    return 0;
}


      
      
      
      
      

      

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
  //directly enter the text
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
  //tokenized output
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
           printf("\n"); 
        }
        else if(s[i+1]=='\0')
        {
           printf("%c",s[i]);
           break; 
        }
        else {
        printf("%c",s[i]);
        }
        
    }
    return 0;
}

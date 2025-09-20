#include <stdio.h>
#include <string.h>

int main(void){

    char s[100];
    printf("Enter string: ");
    scanf("%[^\n]", s);

    for (int i=0; i<strlen(s); i++){

        if (s[i]!=' '){

            printf("%c", s[i]);
        }
    }
    printf("\n");

}

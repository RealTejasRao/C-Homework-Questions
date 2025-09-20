#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char s[]= "Tejas RAo";
    int k;
    int max=0;
    char new;

    for (int m=0; m<strlen(s); m++){

        s[m]= tolower(s[m]);
    }

    for (int i=0; i<strlen(s); i++){
        k=0;
        for (int j=0; j<strlen(s); j++){

            if (s[i]==s[j]) k++;

        }

        if (k>max){

            max=k;
            new= s[i];
        }

    }

    printf("Character with highest frequency: %c, %d times\n", new, max);
}

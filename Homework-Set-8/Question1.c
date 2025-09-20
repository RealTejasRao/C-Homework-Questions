#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char s[]= "Tejas RAo";

    char grp[]= {'a','e','i','o','u'};

    int len= sizeof(grp)/sizeof(grp[0]);

    for (int i=0; i<strlen(s); i++){

        for (int j=0; j<len; j++){

            if (s[i]==grp[j]){

                s[i]=toupper(s[i]);
            }
        }
    }

    printf("New: %s\n", s);
}

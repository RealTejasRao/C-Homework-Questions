#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char s[]= "TeJas RAo";

    for (int i=0; i<strlen(s); i++){

        s[i]= islower(s[i]) ? toupper(s[i]) : isupper(s[i]) ? tolower(s[i]) : s[i];

    }

    printf("%s\n", s);


}

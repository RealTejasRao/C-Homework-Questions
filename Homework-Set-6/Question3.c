#include <stdio.h>

int main(void){

    char alphabet[26];

    char *p= alphabet;

    printf("Alphabet: ");
    for (int i=0; i<26; i++){

        *(p+i)='A'+ i;
        printf("%c ", alphabet[i]);
    }
    printf("\n");
    return 0;

}

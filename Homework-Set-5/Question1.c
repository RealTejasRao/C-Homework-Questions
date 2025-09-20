#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char *s= malloc(100);
    if (s==NULL) return 1;

    printf("Enter number: ");
    scanf("%99s", s);

    if (atoi(s)<0) return printf("Must be greater than 0.\n"), 1;

    for (int i = 0; i < strlen(s); i++) {
        if (!isdigit(s[i])) {
            printf("Invalid input! Only numbers are allowed.\n");
            return 1;
        }
    }

    int sum=0;
    for (int i=0; i<strlen(s); i++){
        sum+=s[i]-'0';
    }
    printf("%d\n", sum);
    free(s);
    return 0;
}

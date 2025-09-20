#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(void){

    char *s= malloc(100);
    if (s==NULL) return 1;

    printf("Enter number: ");
    scanf("%99s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (!isdigit(s[i])) {
            printf("Invalid input! Only numbers are allowed.\n");
            free(s);
            return 1;
        }
    }

    int num= atoi(s);

    printf("Square root is %.2f\n", sqrt(num));
    free(s);
    return 0;

}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    char *s;
    s= malloc(100);
    printf("Enter a number: ");
    scanf("%s", s);

    int grp[strlen(s)];

    for (int i=0; i<strlen(s); i++)
    {
        grp[i]= s[i]-'0';
    }

    int sum=0;
    for (int i=0; i<strlen(s); i++)
    {
        sum+= pow(grp[i], strlen(s));
    }

    printf("%s", sum== atoi(s) ? "It is an Armstrong Number\n" : "Not an Armstrong number\n");
    return 0;
}

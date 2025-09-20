#include <stdio.h>

int main(void){

    int a,b;
    printf("First: ");
    scanf("%d", &a);

    printf("Second: ");
    scanf("%d", &b);

    printf(a==b? "Both are Equal\n" : "%d is bigger\n" , a>b ? a:b);
    return 0;
}
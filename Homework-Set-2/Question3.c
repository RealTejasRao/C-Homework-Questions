#include <stdio.h>
#include <string.h>

int main(void){

    int a,b;
    printf("First: ");
    scanf("%d", &a);

    printf("Second: ");
    scanf("%d", &b);

    if (a>b){
        printf("%d is bigger.\n", a);
        return 0;
    }

    else if (b>a){
        printf("%d is bigger.\n", b);
        return 0;
    }

    else{
        printf("Both are equal.\n");
        return 0;
    }
}
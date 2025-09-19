#include <stdio.h>

int perim(int a, int b);

int main(void){

    int h,w;
    printf("Enter height: ");
    scanf("%d", &h);
    printf("Enter width: ");
    scanf("%d", &w);
    printf("Solution: %d\n", perim(h,w));
    return 0;
}

int perim(int a, int b){

    int p= 2*(a+b);
    return p;
}
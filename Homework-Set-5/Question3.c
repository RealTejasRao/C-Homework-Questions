#include <stdio.h>

int main(void){

    int n;
    printf("Enter temperature in Celcius: ");
    scanf("%d", &n);

    printf( n<=15 ? "Cold\n": "Hot\n");
    return 0;
}

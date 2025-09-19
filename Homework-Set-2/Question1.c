#include <stdio.h>

int avg(int x, int y, int z);

int main(void){

    int n1,n2,n3;
    printf("First number: ");
    scanf("%d", &n1);
    printf("Second number: ");
    scanf("%d", &n2);
    printf("Third number: ");
    scanf("%d", &n3);
    printf("Average: %d\n", avg(n1,n2,n3));
}

int avg(int x, int y, int z){
    int a= (x+y+z)/3;
    return a;
}
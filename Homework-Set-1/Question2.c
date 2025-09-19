#include <stdio.h>

int cube(int n);
int main(void){

    int m;
    printf("Enter number: ");
    scanf("%d", &m);
    printf("Solution: %d\n", cube(m));
}

int cube(int n)
{
    int c= n*n*n;
    return c;
}
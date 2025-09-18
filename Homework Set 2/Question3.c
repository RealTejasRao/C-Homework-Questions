#include <stdio.h>

int avg(int x, int y, int z);

int main(void)
{

    int a,b,c;
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("Third number: ");
    scanf("%d", &c);
    printf("Average is %d", avg(a,b,c));
}

int avg(int x, int y, int z)
{

    int average= (x+y+z)/3;
    return average;
}


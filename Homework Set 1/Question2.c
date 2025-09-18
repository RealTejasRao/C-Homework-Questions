#include <stdio.h>

int cube(int a);

int main(void)
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Cube of %d is %d", n, cube(n));
}

int cube(int a)
{
    int cb= a*a*a;
    return cb;
}
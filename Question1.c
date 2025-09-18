#include <stdio.h>

int perimeter(int a, int b);
int main(void)
{
    int h,w;
    printf("Enter height: ");
    scanf("%d", &h);
    printf("Enter width: ");
    scanf("%d", &w);
    printf("Perimeter of the rectangle is %d\n", perimeter(h,w));

}


int perimeter(int a, int b)
{
    int per= 2*(a+b);
    return per;
}


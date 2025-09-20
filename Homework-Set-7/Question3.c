#include <stdio.h>

int main(void){

    int grp[100]={2,5,3,6,7,5,3};
    int size=7;
    int element;

    printf("What to insert? : ");
    scanf("%d", &element);

    grp[size]= element;
    size++;

    printf("New Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d", grp[i]);
        if (i!=size-1) printf(",");
    }
    printf("\n");

    return 0;

}

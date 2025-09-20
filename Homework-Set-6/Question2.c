#include <stdio.h>

int main(void){

    int grp[]= {1,2,3,4};

    int len= sizeof(grp)/sizeof(grp[0]);

    for (int i=len-1; i>=0; i--){

        printf("%d", grp[i]);
        if (i != 0) printf(",");
    }
    printf("\n");
    return 0;
}

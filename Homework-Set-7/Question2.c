#include <stdio.h>

int main(void){

    int grp[]= {-1,-6,-8,-9,-4,-2,0};

    int n=grp[0];

    int len= sizeof(grp)/sizeof(grp[0]);

    for (int i=0; i<len; i++){

        if (grp[i]>n){

            n=grp[i];
            continue;
        }
    }
    printf("Largest number: %d\n",n);
}

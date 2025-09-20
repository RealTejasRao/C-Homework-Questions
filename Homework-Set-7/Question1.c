#include <stdio.h>

int main(void){

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int grp[]= {0,6,7,8,9,0,4,8,7,6,9,0};

    int k=0;

    int len= sizeof(grp)/sizeof(grp[0]);

    for (int i=0; i<len; i++){

        if (n==grp[i]){
            k++;
        }
    }
    printf("%d occurs %d times in the array.\n" , n, k);
}

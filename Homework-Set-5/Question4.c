#include <stdio.h>

int main(void){

    int power= 3;
    int num= 5;
    int ans=1;
    for (int i=1; i<=power; i++){
        ans*=num;
    }

    printf("%d raised to the power %d is %d\n", num, power, ans );

}

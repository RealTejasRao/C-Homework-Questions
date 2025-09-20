#include <stdio.h>
#include <math.h>

int main(void){

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n<0 || n==0 || n==1) return printf("%s", n<0 ? "Enter number greater than 0.\n" : "Neither Prime nor Composite.\n"), 0;

   for (int i=2; i<= (int)sqrt(n); i++){
    if ((n%i)==0){
        printf("Composite.\n");
        return 0;
    }
   }

   printf("Prime.\n");
   return 0;
}

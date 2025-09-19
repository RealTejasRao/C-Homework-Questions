#include <stdio.h>
#include <string.h>


int main(void){

    char c;
    printf("Enter char: ");
    scanf("%c", &c);

    if (isdigit(c)) {
        printf("Digit detected");
    }
    
    else{
        printf("Not a digit.");
    }
}

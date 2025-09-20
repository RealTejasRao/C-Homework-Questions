#include <stdio.h>
#include <ctype.h>


int main(void){

    char c;
    printf("Enter char: ");
    scanf("%c", &c);

    printf("%s", isdigit(c) ? "Digit Detected\n" : "Not a Digit\n");
    return 0;

}

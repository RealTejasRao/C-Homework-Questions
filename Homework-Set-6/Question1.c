#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if (argc!=3) return printf("Usage: <First num> <Second num>\n"), 0;


    for (int i=0; i<strlen(argv[1]); i++){

        if (i == 0 && argv[1][i] == '-') continue;

        if (!isdigit(argv[1][i])){
            printf("Invalid input. Enter a valid number.\n");
            return 1;
        }
    }

    for (int i=0; i<strlen(argv[2]); i++){
        if (i == 0 && argv[2][i] == '-') continue;
        if (!isdigit(argv[2][i])){
            printf("Invalid input. Enter a valid number.\n");
            return 1;
        }
    }

    int num1= atoi(argv[1]);
    int num2= atoi(argv[2]);
    int *p1= &num1;
    int *p2= &num2;

    if (*p1>*p2){
        printf("%d is greater than %d\n", *p1, *p2);
        return 0;
    }

    else if (*p1<*p2){
        printf("%d is greater than %d\n", *p2, *p1);
        return 0;
    }
    else{
        printf("Both are equal\n");
    }
}

#include <stdio.h>

int main(void){

    FILE *file= fopen("working.csv", "r");

    if (!file) return printf("File not found.\n"), 1;

    char ch;

    ch= fgetc(file);
    while(ch!=EOF){
        printf("%c",ch);
        ch= fgetc(file);
    }

    fclose(file);
    return 0;
}

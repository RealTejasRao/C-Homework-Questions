#include <stdio.h>

int main(void){

    FILE *file= fopen("working.csv", "r");

    if (!file) return printf("File not found.\n"), 1;

    char ch;
    char grp[]= {'a','e','i','o','u'};
    int count=0;

    ch= fgetc(file);
    while(ch!=EOF){
        ch= fgetc(file);
        for (int i=0; i<5; i++){
            if (ch==grp[i]) count++;
        }
    }

    file= fopen("working.csv", "w");

    fprintf(file, "%d",count);



    fclose(file);
    return 0;


}

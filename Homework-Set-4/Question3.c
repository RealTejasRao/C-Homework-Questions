#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if (argc!=3) return printf("Usage: <Start>, <End>\n"), 0;

    int start= atoi(argv[1]);
    int end= atoi(argv[2]);

    if (start<=1 || end<=1) return printf("Must be greater than 1\n"), 0;

    if (start==end) return printf("Start and end point of the range can't be same\n"), 0;


    for (int i=start; i<=end; i++){

        int prime= 1;
        if (i > 2 && i % 2 == 0) continue;

        for (int j=2; j<i; j++){

            if ((i%j)==0){
                prime=0;
                break;
            }
        }
        if (prime) printf("%d\n", i);
    }
}

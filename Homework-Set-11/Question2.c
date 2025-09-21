#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *grp;
    int n = 500;

    grp = (int *)calloc(n, sizeof(int));

    if (grp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        grp[i] = i + 1;
    }

    printf("First 20 numbers:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", grp[i]);
    }
    printf("\n");

    free(grp);

    return 0;
}

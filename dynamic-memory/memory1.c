#include <stddef.h>
#include<stdio.h>
#include <stdlib.h>

int main(){
    size_t n = 5;
    int *a =  malloc(n * sizeof(*a));

    if (a == NULL) {
        perror("malloc");
    }

    for (size_t i; i < n; ++i) {
        a[i] = (int)(i+1);
    }

    free(a);
    a = NULL;
    printf("Success ");
    return 0;
}

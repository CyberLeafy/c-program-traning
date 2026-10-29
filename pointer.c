#include<stdio.h>
int main() {
    int value = 42;
    int *ptr = &value;

    printf("value = %d\n", value);
    printf("address = %p\n", (void *)&value);
    printf("ptr stores = %p\n", (void *)ptr);
    printf("*ptr = %d\n", *ptr);
    
    return 0;
}
#include<stdio.h>
int main(){

    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%d\n", arr[2]);
    printf("%d\n", *(p + 2));
    printf("%d\n", p[3]);
     
    return 0;
}
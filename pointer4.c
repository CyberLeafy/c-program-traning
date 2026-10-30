#include<stdio.h>
int main(){
    int num[] = {3, 6, 9, 12, 16};
    size_t n = sizeof(num) / sizeof(num[0]);

    for (int *p = num; p < num + n; ++p) {
        
    }

    return 0;
}
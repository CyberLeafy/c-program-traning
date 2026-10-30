#include <stdio.h>
struct Book {
    char title[30];
    int pages;
};

int main(){
    struct Book books[] =  {
        {"C Books", 150},
        {"Pointrs", 220},
    };

    for (size_t i = 0; i < 2; ++i) {
        printf("%s: %d pages\n", books[i].title, books[i].pages);
    }
    return 0;
}

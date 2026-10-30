// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <string.h>
union value {
    int i;
    float f;
    char text[30];

};

int main() {
    union value v;
    v.i=29;
    printf("integer=%d\n",v.i);
    strcpy(v.text,"hii");
    printf("text=%s\n",v.text);
    printf("new integer=%d\n",v.i);
    return 0;
}

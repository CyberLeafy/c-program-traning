#include <stdio.h>
struct Student {
    int roll_no;
    char grade;
    float mark;
};

int main() {
    struct Student s = {101, 'A', 85.7f};
    struct Student *p = &s;

    printf("%d\n", s.roll_no);
    printf("%f\n", p -> mark);
    p -> grade = 'B';
    printf("%c\n", s.grade);
    return  0;

}

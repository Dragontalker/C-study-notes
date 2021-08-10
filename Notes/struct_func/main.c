#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    int roll_no;
    float marks;
};

int main(void)
{
    struct Student s1 = {"Nick", 16, 50, 72.5};
    struct Student s2 = {"Tom", 18, 40, 80};

    printf("Student.name = %s\n", s1.name);
    printf("Student.age = %d\n", s1.age);
    printf("Student.roll_no = %d\n", s1.roll_no);
    printf("Student.marks = %.2f\n", s1.marks);

    return EXIT_SUCCESS;
}

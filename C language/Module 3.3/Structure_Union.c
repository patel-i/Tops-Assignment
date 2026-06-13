#include <stdio.h>

struct Student {
    int id;
    float marks;
    char grade;
};

union StudentUnion {
    int id;
    float marks;
    char grade;
};

int main() {

    struct Student s;
    union StudentUnion u;

    /* Structure */
    s.id = 101;
    s.marks = 85.5;
    s.grade = 'A';

    printf("=== Structure ===\n");
    printf("ID = %d\n", s.id);
    printf("Marks = %.1f\n", s.marks);
    printf("Grade = %c\n", s.grade);

    /* Union */
    u.id = 101;
    u.marks = 85.5;
    u.grade = 'A';

    printf("\n=== Union ===\n");
    printf("ID = %d\n", u.id);
    printf("Marks = %.1f\n", u.marks);
    printf("Grade = %c\n", u.grade);

    printf("\nSize of Structure = %lu bytes\n", sizeof(s));
    printf("Size of Union = %lu bytes\n", sizeof(u));

}
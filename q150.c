#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;        // normal structure variable
    struct Student *p;       // pointer to structure

    p = &s;                  // p stores address of s

    // modifying structure members using pointer and -> operator
    printf("Enter roll number: ");
    scanf("%d", &p->roll);

    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    // displaying data using pointer
    printf("\n--- Student Details ---\n");
    printf("Roll : %d\n", p->roll);
    printf("Name : %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}

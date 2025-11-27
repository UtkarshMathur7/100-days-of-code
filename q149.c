#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date join;
};

int main() {
    struct Employee *e;

    // allocate memory
    e = (struct Employee*) malloc(sizeof(struct Employee));
    if (e == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    // input details
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);

    printf("Enter Name: ");
    scanf("%s", e->name);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &e->join.day, &e->join.month, &e->join.year);

    // print details
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Salary: %.2f\n", e->salary);
    printf("Joining Date: %d-%d-%d\n",
           e->join.day, e->join.month, e->join.year);

    // free memory
    free(e);

    return 0;
}

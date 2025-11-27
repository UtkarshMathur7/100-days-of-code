#include <stdio.h>
#include <string.h>  // for strcmp
#include <math.h>    // for fabs

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
    struct Employee e1, e2;

    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    if (scanf("%d", &e1.id) != 1) return 1;

    printf("Name: ");
    scanf("%49s", e1.name);            // limit to avoid overflow

    printf("Salary: ");
    if (scanf("%f", &e1.salary) != 1) return 1;

    printf("Joining Date (day month year): ");
    if (scanf("%d %d %d", &e1.join.day, &e1.join.month, &e1.join.year) != 3) return 1;

    printf("\nEnter details for Employee 2:\n");
    printf("ID: ");
    if (scanf("%d", &e2.id) != 1) return 1;

    printf("Name: ");
    scanf("%49s", e2.name);

    printf("Salary: ");
    if (scanf("%f", &e2.salary) != 1) return 1;

    printf("Joining Date (day month year): ");
    if (scanf("%d %d %d", &e2.join.day, &e2.join.month, &e2.join.year) != 3) return 1;

    /* compare:
       - id (int)
       - name (string) using strcmp
       - salary (float) using a small tolerance
       - joining date fields
    */
    const float EPS = 0.001f; // tolerance for float comparison

    if (e1.id == e2.id &&
        strcmp(e1.name, e2.name) == 0 &&
        fabs(e1.salary - e2.salary) < EPS &&
        e1.join.day == e2.join.day &&
        e1.join.month == e2.join.month &&
        e1.join.year == e2.join.year)
    {
        printf("\nEmployees are IDENTICAL.\n");
    } else {
        printf("\nEmployees are NOT identical.\n");
    }

    return 0;
}

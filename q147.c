#include <stdio.h>

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
    struct Employee e, r;
    FILE *fp;

    // Taking input
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    // ----- Writing to binary file -----
    fp = fopen("emp.bin", "wb");
    if (fp == NULL) {
        printf("File opening error!\n");
        return 1;
    }

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    // ----- Reading from binary file -----
    fp = fopen("emp.bin", "rb");
    if (fp == NULL) {
        printf("File opening error!\n");
        return 1;
    }

    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    // Printing details read from file
    printf("\n--- Employee Details Read From File ---\n");
    printf("ID: %d\n", r.id);
    printf("Name: %s\n", r.name);
    printf("Salary: %.2f\n", r.salary);
    printf("Joining Date: %d-%d-%d\n",
           r.join.day, r.join.month, r.join.year);

    return 0;
}

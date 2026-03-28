#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    char dept[20];
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("25377.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    fscanf(fp, "%s %d %s", s.name, &s.roll, s.dept);

    fclose(fp);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Department: %s\n", s.dept);

    int n = s.roll;

    printf("Prime digits in roll number: ");

    while (n > 0) {
        int d = n % 10;
        if (d == 2 || d == 3 || d == 5 || d == 7) {
            printf("%d ", d);
        }
        n = n / 10;
    }

    printf("\n");

    return 0;
}
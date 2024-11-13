#include <stdio.h>

int main() {
    char name[50], section[10];
    int birthdate, age;

    printf("ENTER YOUR NAME: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("ENTER YOUR SECTION: ");
    scanf("%s", section);

    printf("ENTER YOUR BIRTH YEAR (YYYY): ");
    scanf("%d", &birthdate);

    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);

    printf("Hello %s from BSIT-%s, your birth year is %d and you're %d years old\n", name, section, birthdate, age);
     
    return 0;
}
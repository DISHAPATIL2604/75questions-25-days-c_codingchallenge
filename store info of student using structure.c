include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", name);
    printf("Roll number: %d\n", roll);
    printf("Marks: %.1f\n", marks);

    return 0;
}
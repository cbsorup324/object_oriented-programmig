#include <stdio.h>

struct std
{
    char name[30];
    int roll;
    int marks[5];
};

int main()
{
    struct std s1;
    printf("Enter the student name: ");
    gets(s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &s1.marks[i]);
    }

    printf("Name of the student : %s \n Roll number : %d \n",s1.name, s1.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("Marks: %d\n", s1.marks[i]);
    }
    return 0;
}
#include <stdio.h>
struct std
{
    char name[50];
    int id;
    char sec;
    float cgpa;
    char sem[50];

    struct Course
    {
        int courseCode;
        char courseTitle[50];
    } courseNo;
};
int main()
{
    int n;
    printf("Enter students Number: ");
    scanf("%d", &n);
    struct std s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Name of student %d : ", i + 1);
        fflush(stdin);
        gets(s[i].name);

        printf("ID of student %d : ", i + 1);
        scanf("%d", &s[i].id);

        printf("Section of student %d : ", i + 1);
        scanf(" %c", &s[i].sec);

        printf("CGPA of student %d : ", i + 1);
        scanf("%f", &s[i].cgpa);

        printf("Semester of student %d : ", i + 1);
        fflush(stdin);
        gets(s[i].sem);


        printf("Enter course code for Course : ");
        scanf("%d", &s[i].courseNo.courseCode);

        printf("Enter course title for Course : ");
        scanf("%s", &s[i].courseNo.courseTitle);

    }
    printf("______________________________________________________________\n");
    printf("            Daffodil International University\n");
    printf("                  Department of CSE\n");
    printf("                 Semester: Fall 2023\n");
    printf("                 Student Information\n");
    printf("______________________________________________________________\n");

    printf("Name     ID   Section  CGPA   Semester   CourseCode  CourseTitle\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-10s", s[i].name);
        printf("%d   ", s[i].id);
        printf(" %c      ", s[i].sec);
        printf(" %.2f   ", s[i].cgpa);
        printf(" %s    ", s[i].sem);
        printf("   %d", s[i].courseNo.courseCode);
        printf("     %s", s[i].courseNo.courseTitle);
        printf("\n");
    }
    return 0;
}

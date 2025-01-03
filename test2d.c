#include <stdio.h>

int main()
{
    int students_marks[6][1];
    int pass_student = 0;
    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 1; j++)
        {
            scanf("%d", &students_marks[i][j]);
            if (students_marks[i][j] >= 50)
            {
                pass_student++;
            }
        }
    }
    if (pass_student == 6)
    {
        printf("All students are pass\n");
    }
    else if (pass_student >= 1 && pass_student < 6)
    {
        printf("%d students are pass\n", pass_student);
        printf("marks of second student is %d", students_marks[1][0]);
    }
    else
    {
        printf("No students are pass\n");
    }
if (students_marks[0][1] == students_marks[3][1])
{
printf("marks are same for 1st and 4th student\n");
}
    return 0;
}

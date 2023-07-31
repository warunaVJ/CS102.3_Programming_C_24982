#include <stdio.h>

int main()
{

//. Input Marks of 10 students and output the maximum , minimum and average Marks.

    int marks, max = 0, mini = 100, tot = 0, C = 1;

    while (C <= 10)
    {
        printf("Enter the mark number %d: ", C);
        scanf("%d", &marks);

        if (marks > max)
        {
            max = marks;

        }
        if (marks < mini)
        {
            mini = marks;
        }

        tot += marks;
        ++C;

    }

    printf("%d is the maximum\n%d is the minimum\n%.2lf is the avg", max, mini, (double)tot/10);

}

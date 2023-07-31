#include <stdio.h>

int main()
{
    int mark, marks, marks1;

    for (mark = 0; mark < 10; ++mark )
    {
        printf("Enter student marks: ");
        scanf("%d", &marks);
        marks1 += marks;
    }

    printf("%d/10 = %d, which is.. ", marks1, marks1/10);
    if ((marks1/10)<50)
    {
        printf("Failed!");
    }
    else if ((marks1/10)>=50)
    {
        printf("Passed!");
    }
}

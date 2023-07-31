#include <stdio.h>

int main()
{
    int no = 0;

    //While loop

    while (no <=100)
    {
        printf("%d\n", no);
        ++ no;
    }

    //Do.. while loop

    do {
        printf("%d\n", no);
        ++ no;
    }
    while (no <= 100);

    //For loop

    for (no = 0; no <= 100; ++no)
    {
        printf("%d\n", no);
    }
}

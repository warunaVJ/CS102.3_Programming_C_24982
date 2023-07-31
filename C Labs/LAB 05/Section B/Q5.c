#include <stdio.h>

int main()
{
/*Input employee number, and hours worked by employees, and to display the following:
Employee number, Over Time Payment, and the percentage of employees whose Over Time
Payment exceeding the Rs. 4000/-.
The user should input –999 as employee number to end the program, and the normal Over Time
Rate is Rs.150 per hour and Rs. 200 per hour for hours in excess of 40.*/

    int Empno = 0, overt, hours;
    double overtc = 0.0, empc = -1.0;

    while (Empno != -999)
    {
        printf("Enter the employee number : ");
        scanf("%d", &Empno);

        printf("Enter the hours worked : ");
        scanf("%d", &hours);

        if (hours >= 40)
        {
            overt = 200*hours;
            if (overt > 4000)
            {
                ++overtc;
            }
        }
        else
        {
            overt = 150*hours;
            if (overt > 4000)
            {
                ++overtc;
            }
        }
        ++empc;


        printf("The Employee %d, earned %d.\n", Empno, overt);

    }

    printf("%.2lf", (overtc/empc)*100.0);
    printf("percentage of people got an exceeding OT payment. ");
}

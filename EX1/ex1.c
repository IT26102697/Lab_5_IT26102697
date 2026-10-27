#include <stdio.h>

int main(void)
{
    float gpa;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    if (gpa < 1.0)
    {
        printf("Failed semester - registration suspended\n");
    }
    else
    {
        if (gpa < 2.0)
        {
            printf("On probation for next semester\n");
        }
        else
        {
            if (gpa >= 3.5)
            {
                printf("Highest honors for semester\n");
            }
            else
            {
                if (gpa >= 3.0)
                {
                    printf("Dean's list for semester\n");
                }
            }
        }
    }

    return 0;
}

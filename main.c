#include <stdio.h>

int main()
{
    float Grade1, Grade2, Grade3, Grade4, Grade5, average;
        printf("Enter grades for every subject: \n");

                     printf("input 1 :");
                     scanf("%f", &Grade1);
                     printf("input 2 :");
                     scanf("%f", &Grade2);
                     printf("input 3:");
                     scanf("%f", &Grade3);
                     printf("input 4:");
                     scanf("%f", &Grade4);
                     printf("input 5:");
                     scanf("%f", &Grade5);

    average = (Grade1 + Grade2 + Grade3 + Grade4 + Grade5) /5;

                  // prints the average grade

              printf("Average : %0.2f\n", average);



    return 0;
}


#include <stdio.h>  

void main()
{
    int co1, co2;   

    printf("Input the values for X and Y coordinate : ");   
    scanf("%d %d", &co1, &co2);   

    if (co1 > 0 && co2 > 0)   
        printf(" point (%d,%d)  First quadrant.\n", co1, co2);   
    else if (co1 < 0 && co2 > 0)   
        printf(" point (%d,%d)  Second quadrant.\n", co1, co2);   
    else if (co1 < 0 && co2 < 0)   
        printf(" point (%d, %d)  Third quadrant.\n", co1, co2);   
    else if (co1 > 0 && co2 < 0)   
        printf(" point (%d,%d) Fourth quadrant.\n", co1, co2);   
    else if (co1 == 0 && co2 == 0)  
        printf(" point (%d,%d) lies at the origin.\n", co1, co2);   
}
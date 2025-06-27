#include <stdio.h>  

void main()
{
    int co1, co2;   

    printf("enter the values for X and Y coordinate : ");   
    scanf("%d %d", &co1, &co2);   

    if (co1 > 0 && co2 > 0)   
        printf(" First quadrant.\n", co1, co2);   
    else if (co1 < 0 && co2 > 0)   
        printf("  Second quadrant.\n", co1, co2);   
    else if (co1 < 0 && co2 < 0)   
        printf("   Third quadrant.\n", co1, co2);   
    else if (co1 > 0 && co2 < 0)   
        printf(" Fourth quadrant.\n", co1, co2);   
    else if (co1 == 0 && co2 == 0)  
        printf(" lies at the origin.\n", co1, co2);   
}
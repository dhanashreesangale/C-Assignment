#include<stdio.h>
int main()
{
    int ch;
    printf("enter any number");
    scanf("%d",&ch);
    switch(ch)
    {
        case 0:
        printf("zero /n");
        break;

        case 1:
        printf("one");
        break;

         case 2:
        printf("two");
        break;

         case 3:
        printf("three");
        break;

         case 4:
        printf("four");
        break;

         case 5:
        printf("five");
        break;

         case 6:
        printf("six");
        break;

         case 7:
        printf("seven");
        break;

         case 8:
        printf("eight");
        break;

         case 9:
        printf("nine");
        break;

         case 10:
        printf("ten");
        break;
default:
printf("invalid");
break;
    }
}
#include<stdio.h>
int main()
{
    int a,b,res;
    char c;
    printf("enter any operands");
    scanf("%c",&c);
    printf("enter any 2 numbers :");
    scanf("%d%d",&a,&b);
            switch(c)
            {
            case '+':
            res=a+b;
            printf("addition is %d",res );
            break;

            case '-':
            res=a-b;
            printf("subtraction is %d",res);
            break;

            case '*':
            res=a*b;
            printf("multiplication is %d",res);
            break;

            case '/':
            res=a/b;
            printf("divide is %d",res);
            break;
default:
printf("invalid");

    }
    return 0;

}
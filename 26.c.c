#include<stdio.h>
int main()
{
    int i,rev=0,rem,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    
    }
    printf("reversed number is %d",rev);
    return 0;
}
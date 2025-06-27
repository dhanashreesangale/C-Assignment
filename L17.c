#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter ending number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of even 1 to %d=%d",n,sum);
    return 0;
}
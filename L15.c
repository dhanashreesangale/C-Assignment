#include<stdio.h>
int main()
{
    int sum=0,i;
    for(i=1;i<=10;i++)
   {
    if(i%2==0)
    {
        sum+=i;
    }
   }
    printf("the sum of even is:%d",sum);
    return 0;
}

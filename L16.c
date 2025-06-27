#include<stdio.h>
int main()
{
    int i,sum,n;
    for(i=100;i<=200;i++)
    {
       if(i%2!=0) 
       {
        sum+=i;
       }
       printf("sum of odd is %d",i);
       return 0;
    }
}
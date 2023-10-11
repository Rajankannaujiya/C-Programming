#include<stdio.h>
void main()
{
    int a[5],i,sum=0,avg;
    for(i=0;i<5;i++)
    {
        printf("enter the value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
     printf("%d",sum);
     printf("\n");
     printf("%d",avg);
}
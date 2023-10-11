#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",n);
    int a[n][n], b[n][n], sum[n][n];
    printf("enter the elements of array");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
            scanf("%d",&b[i][j]);
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d",sum);
        }
    }
}
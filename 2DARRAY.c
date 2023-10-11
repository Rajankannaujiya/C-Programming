#include<stdio.h>
void main()
{
    int T,N,c=0,pair;
    int *x;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        printf("enter the no. of dolls");
        scanf("%d",&N);
        pair=N/2;
        printf("%d",pair);
        for (int j = 0; i < N; j++)
        {
            for (int k = 0; i < N; k++)
            {
                if(x[j]!=x[k])
                {
                    c++;
                }
                else{
                    c=0;
                }
            }
        }if(c>0)
            {
                printf("%d",&c);
            }
        
    }
}
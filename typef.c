/* no argument without returntype
#include<stdio.h>
void sum(void);
void main()
{
    sum();
}
void sum()
{
    int a=2,b=5,sum=0;
    sum=a+b;
    printf("%d",sum);
}
// no argument with return type
#include<stdio.h>
int sum();
void main()
{
    int s;
    s=sum();
    printf("%d",s);
}
int sum()
{
    int a=2,b=5,sum=0;
    sum=a+b;
    return sum;
}*/
// with argument without return type
#include<stdio.h>
void sum(float , float);
void main()
{
    float x=2,y=5;
    sum(x,y);
}
void sum(float a, float b)
{
    float s=0;
    s=a+b;
    printf("sum=%f",s);
}
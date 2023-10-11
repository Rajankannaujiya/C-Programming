
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,d,i,j,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    int n;
        char v[]={'a','e','i','o','u'};
        printf("enter the length\n");
        scanf("%d",&n);
        char s[n];
	    for(j=0;j<n;j++)
        {
             for(k=0;k<=4;j++)
             {
                if((s[j]!=v[k]))
             break;
             }
	    }
    }return 0;
}



    
    /* int binary;
    printf("enter the binary number");
    scanf("%d",&binary);
    int decimal=0,weight=1,rem;
    while (binary!=0)
    {
        rem=binary%10;
        decimal=rem+binary*weight;
        binary=binary/10;
        weight=weight*2;
    }printf("%d\n",decimal);*/
    


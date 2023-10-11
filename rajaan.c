#include<stdio.h>
int main(void)
{
	int n,count=0;
	int t;
	printf("enter the no. of test case");
	scanf("%d",&t);
	for (int j=1;j<t;j++)
	{
		printf("enter the length");
	    scanf("%d",&n);
	    char s[n];
		printf("enter the string of length %d",n);
	    scanf("%s",&s);
	    for(int i=0; i<n; i++)
	    {
	        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
		    {
		       count=0;
		    }
		    else{
			    count=count+1;
				if(count>=4)
	            break;
			}
		}	
        if(count>=4)
	    {
	        printf("no\n");
	    }
	    else{
		    printf("yes\n");
	    }
	    
	 
	    
	}
	    return 0;
}
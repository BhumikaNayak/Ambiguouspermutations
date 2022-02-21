#include <stdio.h>
int main()
{
    	int n,i;
	    n=1;
	    while(n!=0)
	    {
	    scanf("%d",&n);
	    int arr[n+1];
	    int count=0;
	    
	    if(n>0)
	    {
	       for(i=1;i<=n;i++)
	       {
	            scanf("%d",&arr[i]);
	       }
	       for(i=1;i<=n;i++)
	       {
	            if(i==arr[arr[i]])
	            {
	                count++;
	            }
	       }
	       if(count==n)
	       {
	           printf("ambiguous\n");
	       }
	       else
	       {
	           printf("not ambiguous\n");
	       }
	    }
	    }
	    return 0;
}
//code by bhumika nayak
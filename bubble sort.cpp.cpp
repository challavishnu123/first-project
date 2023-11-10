#include<stdio.h>
int main()
{
	int a[34],n=5,i,j,temp;
	for(i=0;i<n;i++)
	  { 
	  scanf("%d",&a[i]);
	  
	  }
	  for(i=0;i<n-1;i++)
	    {
	    	for(j=0;j<n-1-i;i++)
	    	{
	    		if(a[i]<a[j])
	    		{
	    			temp=a[i];
	    			a[i]=a[j];
	    			a[j]=temp;
				}
			}
			print("%d",a[i]);
		}
		
}

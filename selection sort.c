#include<stdio.h>
int main()
{
	int a[10],n=5,i,j,min,teA;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				teA=a[j];
				a[j]=a[i];
				a[i]=teA;
			}
		}
	}
	NAA ISTAM REYYY MALLI NAA ISTAM
}

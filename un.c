#include<stdio.h>
int main()
{
	int a[100],n,i,j,count=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				count=count+1;
			}
		}
	}
		if(count==0)
		{
			printf("\nunique");
		}
	return 0;
}
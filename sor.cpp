#include<stdio.h>

int main()

{
	
int a[100],i,n,c=0;
	
	
scanf("%d",&n);
	

	
for(i=0;i<n;i++)
	
{
		
scanf("%d",&a[i]);
	
}
	
for(i=0;i<n;i++)
	
{
		
if(i==a[i])
		
{
			
printf("\t%d",a[i]);
			
c=1;
		
}
	
}
	
if(c==0)
{
		
printf("-1");
	
}
	
	
return 0;


}

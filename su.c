#include<stdio.h>


#include<math.h>

main()

{
 
int n,t=0,r,q;
 

scanf("%d",&n);
 
q=n;
 
do
 
{
r=q%10;
      
t=t+pow(r,2);
      
q=q/10;
 
}
 
while(q);
 
printf("%d",t);
 
getch();



}
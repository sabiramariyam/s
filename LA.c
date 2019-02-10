#include <stdio.h>

#include<string.h>

int main()

{
    
char s[5][5],c;
    
int n,j,i,t=1,temp=0,l=0;
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
{
        
scanf("%s",&s[i]);
    
}
    
l=strlen(s[0]);
    
for(i=0;i<l;i++)
    
{
        
c=s[0][i];
        
for(j=1;j<n;j++)
       
 {
          
 if((s[j][i]==c)&&(t==1))
          
 {
              
 t=1;
          
 }
           
else
          
 {
               
t=0;
              
 break;
          
 }
       
 }
        
if(t==1)
        
{
           
 printf("%c",c);
       
 }
        
    
}

   
 return 0;

}
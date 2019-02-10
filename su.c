#include <stdio.h>

int main(void) {
	int n;
	int m,a,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		m=a*a;
		sum=sum+m;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a,m,n,len=0,s=0;
	scanf("%d",&n);
	a=m=n;
	while(n>0)
	{
	    len++;
	    n=n/10;
	}
	while(m>0)
	{
	    int r=m%10;
	    s=s+pow(r,len);
	    m=m/10;
	}
    
    printf("%d\t",s==a);
	return 0;
}

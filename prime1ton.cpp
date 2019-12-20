#include<stdio.h>
int main()
{
	int n,i=3;
	scanf("%d",&n);
	if(n>=2)
	{
		printf("%d\t",n);
	}
	while(i<=n)
	{
		if(i%2!=0&&i%3!=0)
	    printf("%d\t",i);
		i=i+2;
	}
	return 0;
}

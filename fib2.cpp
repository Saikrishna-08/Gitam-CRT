#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,s=0,i=0;
	while(i<n)
	{
		s=f1+f2;
		printf("%d",s);
		f1=f2;
		f2=s;
		i++;
	}
	return 0;
}

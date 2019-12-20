#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	(n%4==0&&n%100!=0)?printf("%s","leap"):printf("%s","not a leap");
	return 0;
}

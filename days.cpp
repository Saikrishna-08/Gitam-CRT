#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	switch(n)
	{
		case(1):printf("%s","monday");
		        break;
        case(2):printf("%s","tuesday");
		        break;	
		case(3):printf("%s","wednesday");
		        break;
		case(4):printf("%s","thursday");
		        break;
		case(5):printf("%s","friday");
		        break;
		case(6):printf("%s","saturday");
		        break;
		case(7):printf("%s","sunday");
		        break;	
	}
	return 0;
}

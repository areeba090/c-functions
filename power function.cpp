#include <stdio.h>
#include <math.h>
int pow(int n1,int n2)
{
	int power=1;
	for (int i=1;i<=n2;i++)
	{
		power=power*n1;
	}
	return power;
}
int main ()
{
	int num1,num2,n;
    printf ("enter two numbers\n");
	scanf ("%d%d",&num1,&num2);
	int power =pow(num1,num2);
	printf ("fsrt number raised to the power of second =%d",power);
}

#include <stdio.h>

int sum(int n1,int n2)
{
	return n1+n2;
}
int difference (int n1,int n2)
{
	return n1-n2;
}
int product(int n1,int n2)
{
	return n1*n2;
}
int mod (int n1,int n2)
{
	return n1%n2;
}
int division (int n1,int n2)
{
	return n1/n2;
}
int main ()
{
	int num1,num2;
	printf ("enter two numbers");
	scanf ("%d%d",&num1,&num2);
	int add=sum(num1,num2);
	printf ("sum=%d\n",add);
	int subtract=difference (num1,num2);
	printf ("difference=%d\n",subtract);
	int multiply= product (num1,num2);
	printf ("product=%d\n",multiply);
	int modulus=mod (num1,num2);
	printf ("mod=%d\n",modulus);
	int divide=division(num1,num2);
	printf ("divide=%d",divide);
}


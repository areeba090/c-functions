#include <stdio.h>
int prime (int a)
{
	int c=0;
		for (int j=2;j<=a/2;j++)
		{
			if(a%j==0)
			{
			c++;
			break;
			}
		}
		return c;
}

int main (){
	int upperlimit,lowerlimit;
	int a,b;
	printf ("enter limits");
	scanf ("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(prime(i)==0){
			printf("%d ",i);
		}
	}
}

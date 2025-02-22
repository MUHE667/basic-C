#include<stdio.h>
int fun(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}

int fun(int n)
{
	if(n==1) return 0;
	else if(n==2)  return 1;
	else 
	{
		return (n-1)*(fun(n-2)+fun(n-1));
	}
}
#include<stdio.h>
int main()
{
	unsigned int t,i;
	unsigned long long n,res;
	scanf("%u",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		res = 2*n*(n-1)*(n-1)  + n*(n-1)*(n-2) + 2*n*(n-1)*(n-2)*(n-2);
		printf("%llu\n",res);
	}
	return 0;
}

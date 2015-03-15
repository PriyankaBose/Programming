#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c < 48 || c > 57); c = gc());
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
}

int main()
{
	int t,n,a[1000001]={0},max=0;
	//scanf("%d",&t);
	scanint(t);
	while(t--)
	{
		scanint(n);
		//scanf("%d",&n);
		if(max<n)
			max=n;
		a[n]++;
	}
	for(int i=0;i<=max;i++)
	{
		if(a[i]>=1)
		{
			while(a[i]--)
				printf("%d\n",i);
		}
	}
	return 0;
}
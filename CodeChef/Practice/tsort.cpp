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
	int t,n,a[1000000];
	//scanf("%d",&t);
	scanint(t);
	n=t;
	while(t--)
	{
		scanint(a[t]);
		//scanf("%d",&a[t]);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	
	return 0;
}
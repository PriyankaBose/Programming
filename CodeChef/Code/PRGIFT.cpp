#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include <cstdio>
 
#define gc getchar_unlocked

using namespace std;

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
	int t,n,	k,a[50],c,i;
	//scanint(t);
	scanf("%d",&t);
	while(t>0)
	{
		c=0;
		scanf("%d",&n);
		scanf("%d",&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
			if(a[i]%2 == 0)
			{
				c++;
			}
		}
		if(k==0 && n==c)
			printf("NO\n");
		else
		{
			if(c>=k)
				printf("YES\n");
			else
				printf("NO\n");
		}
		t--;
	}
}
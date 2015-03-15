#include<stdio.h>
#include<string.h>
int main()
{
	unsigned int t,n,i;
	unsigned long v,l;
	scanf("%u",&t);
	char s[100001];
	while(t>0)
	{
		scanf("%u",&n);
		gets(s);
		l=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
				l++;
		}
		v=(l*(l+1))/2;
		printf("%lu\n",v);
		t--;
	}
	return 0;
}
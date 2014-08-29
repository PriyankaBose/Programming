#include<stdio.h>
#include<string.h>
int main()
{
	unsigned t,n,i;
	unsigned long long l;
	char s[100001];
	scanf("%u",&t);
	while(t>0)
	{
		scanf("%u",&n);
		scanf("%s", s);
		l=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
				l++;
		}
		l=(l*(l+1))/2;
		printf("%llu\n",l);
		t--;
	}
	return 0;
}
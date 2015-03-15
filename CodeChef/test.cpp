#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	unsigned int N,bit,len=0,r;
	scanf("%d",&n);
	N=n;
	for(r=1 << 31;r>0;r=r/2)
	{
		bit= N&r;
		len++;
		if(bit)
			break;		
	}
	printf("%d\n",len);
	len=sizeof(int)*8-len;
	printf("%d\n",len);
	for(r=0;r<=len;r++)
	{
		N=N^(1<<r);
	}
	n=N;
	printf("%d",n);
	return n;
}
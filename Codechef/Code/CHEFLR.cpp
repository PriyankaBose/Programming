#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

#define MODULUS 1000000007
int main()
{
	int T,i,par,len,lev;
	char S[100001];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",S);
		len=strlen(S);
		par=1;
		lev=1;
		for(i=0;i<len;i++)
		{
			if(lev%2!=0)
			{
				if(S[i]=='l')
					par=par*2;
				else
					par=par*2+2;
			}
			else if(lev%2==0)
			{
				if(S[i]=='l')
					par=par*2-1;
				else
					par=par*2+1;
			}
			// In case of Negative numbers 
			if(par<0)
				par=par +MODULUS;
				
			if(par>=MODULUS)
				par=par - MODULUS;
				
			if(par>=MODULUS)
				par=par - MODULUS;	
				
			lev++;
		}
		printf("%d\n",par);
	}
	return 0;
}
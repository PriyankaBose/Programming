#include<stdio.h>
 
#define gc getchar_unlocked
#define MAXN 100000
#define MAXK 1000
 
inline int scanint()
{
    int n=0;
	int ch=getchar_unlocked();
	while( ch <48 )ch=getchar_unlocked();
	while( ch >47 )
		n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();
	return n;
}
 
int main()
{
	int T,N,K,DP[MAXK],i,j,m;
 
	T=scanint();
	while(T--)
	{
		N=scanint();
		K=scanint();
		DP[0]=1;
		for(i=1;i<=K;i++)
			DP[i]=0;
		for(i=0;i<N;i++)
		{
			m=scanint();
			if(m<=K)
			{
				for(j= K-m;j>=0 &&DP[K]==0;j--)
				{
					if(DP[j])
						DP[j + m]=1;
				}
			}
		}
		printf("%d\n",DP[K]);
		
	}
	return 0;
} 
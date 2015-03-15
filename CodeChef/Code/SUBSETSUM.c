#include<stdio.h>

#define gc getchar_unlocked
#define MAXN 100000
#define MAXK 1000

inline void scanint(int *x)
{
    register int c = gc();
    *x = 0;
    for(;(c < 48 || c > 57); c = gc());
    for(; c > 47 && c < 58; c = gc()) { *x = ((*x) << 1) + ((*x) <<3 ) + c - 48; }
}

int main()
{
	int T,A[MAXN],N,K,DP[MAXK],i,j;
	//scanf("%lld",&T);
	scanint(&T);
	while(T--)
	{
		//scanf("%lld %lld",&N,&K);
		scanint(&N);
		scanint(&K);
		for(i=0;i<N;i++)
			scanint(&A[i]);
			//scanf("%lld",&A[i]);
		DP[0]=1;
		for(i=1;i<=K;i++)
			DP[i]=0;
		for(i=0;i<N;i++)
		{
			for(j= K-A[i];j>=0;j--)
			{
				if(DP[j] && A[i]<=K)
					DP[j + A[i]]=1;
			}
		}
		printf("%d\n",DP[K]);
		
	}
	return 0;
}
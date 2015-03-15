#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define gc getchar_unlocked

void scanint(int *x)
{
    register int c = gc();
    *x = 0;
    int neg = 0;
    for(;((c < 48 || c > 57) && c != '-'); c = gc());
    if(c == '-') { neg = 1; c = gc(); }
    for(; c > 47 && c < 58; c = gc()) { *x = ((*x) << 1) + ((*x) <<3 ) + c - 48; }
    if(neg) *x = -(*x);
}

int main()
{
	int N,M,A[100001],i,d;
	int net=0,res;
	char Q;
	//scanf("%d",&N);
	//scanf("%d",&M);
	scanint(&N);
	scanint(&M);
	
	for(i=1;i<=N;i++)
		scanint(&A[i]);
		//scanf("%d",&A[i]);
	for(i=1;i<=M;i++)
	{
		scanf(" %c",&Q);
		//scanf("%d",&d);
		scanint(&d);
		
		if(Q=='R')
		{
			res=d;
			if(net!=0)
			{
				if(net+d>N)
					res=(net+d)-N;
				else
					res=net+d;
			}
			
			printf("%d\n",A[res]);
		}
		else if(Q=='C')
			net=net+d;
		else if(Q=='A')
			net=net-d;	
			
		if(net>=N)
			net=net-N;
		if(net<0)
			net=N+net;
	}
	return 0;
}
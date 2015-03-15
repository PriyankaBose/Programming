#include <stdio.h>
#include <stdlib.h>


//#define gc getchar_unlocked
#define ABS(X) ((X > 0) ? X : -X))
#define DIFF(X, Y) ((X >= Y) ? (X - Y) : (Y - X))
#define MIN(X, Y) ((X > Y) ? Y : X))
#define FOR(I, N) for(i = 0; i < N; i++)
#define MOD 1000000007
/*void scanintUL(unsigned long &x)
{
    register int c = gc();
    x = 0;
    for(;(c < 48 || c > 57); c = gc());
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
}

void scanint(int &x)
{
    register int c = gc();
    x = 0;
	int neg = 0;
    for(;((c < 48 || c > 57) && c != '-'); c = gc());
    if(c == '-') { neg = 1; c = gc(); }
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
    if(neg) x = -x;
}*/
long long int fact[1000001],ifact[1000001];

long long int modularInverse(long long int base, int exp)
{
	long long int res=1;
	while(exp>0)
	{
		if(exp%2==1)
			res=(res*base)%MOD;
		base=(base*base)%MOD;
		exp=exp/2;
	}
	return res;
}

void fastNCR()
{
	int i=0;
	fact[0]=ifact[0]=1;
	for(i=1;i<=1000000;i++)
	{
		fact[i]=(i*fact[i-1])%MOD;
		ifact[i]=	(modularInverse(fact[i],MOD-2)) %MOD;
	}
	
}

int main()
{
	int N,n;
	long long int c=0;
	fastNCR();
	scanf("%d",&N);
	if(N>=12)
	{
		
		if(N%2==0)
			n=N-14;
		else
			n=N-13;
		n=n/2;
		c=(fact[n+6]*ifact[6])%MOD;
		c=c*ifact[n]%MOD;
	}
	printf("%lld",c);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
* If p is prime, (a / b) mod p = (a * b^(-1)) mod p
* nCr = (n! / (r!*(n - r)!)) mod p = (n! mod p) * ((r!*(n - r)!)^(-1) (mod p))
* If p is prime, the inverse of any number (x mod p) is ((x ^( p - 2)) mod p) (Euler's Theorem)
* Here, r = 6. Hence, nCr = nC6 = (n * (n - 1) * ... * (n -5)) / 720
* 720^(-1) has been pre-calculated in B
*/
#define gc getchar_unlocked
#define ABS(X) ((X > 0) ? X : -X))
#define DIFF(X, Y) ((X >= Y) ? (X - Y) : (Y - X))
#define MIN(X, Y) ((X > Y) ? Y : X))
#define FOR(I, N) for(i = 0; i < N; i++)
#define MOD 1000000007

void scanint(long long *x)
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
	int N,n,i;
	long long int c=0,B=301388891%MOD;
	//scanf("%d",&N);
	scanint(&N);
	if(N>=12)
	{
		c=1;
		if(N%2==0)
			n=N-14;
		else
			n=N-13;
		n=n/2;
		n=n+6;
		for(i=0;i<=5;i++)
		{
			c=c*(n-i);
			if(c>=MOD)
				c=c%MOD;
		}
		
		c=(c*B);	
		
		if(c>=MOD)
			c=c%MOD;
	}
	printf("%lld",c);
	return 0;
}
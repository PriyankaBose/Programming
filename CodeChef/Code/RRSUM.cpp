#include<iostream>
#include<cstdlib>
#include<cmath>
#include<map>
#include<iterator>
#include<algorithm>
#include <cstdio>
 
#define gc getchar_unlocked

using namespace std;

void scanintposull(long long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 /*
void scanintposul(unsigned long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void scanintposu(unsigned &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}*/
int main()
{
	long long N,M,q,r;
	//scanf("%lld %lld",&N,&M);
	scanintposull(N);
	scanintposull(M);
	while(M--)
	{
		//scanf("%lld",&q);
		scanintposull(q);
		r=q-(N+1);
		if(r>N)
			r=(3*N+1)-q;
		if(r<0)
			r=0;
		printf("%lld\n",r);
	}
	return 0;
}
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<map>
#include<iterator>
#include<algorithm>
#include <cstdio>
 
#define gc getchar_unlocked

using namespace std;

void scanintposull(int  &x)
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
	int N,t,A[100001],i,c,j;
	//scanf("%d",&t);
	scanintposull(t);
	while(t--)
	{
		//scanf("%d",&N);
		scanintposull(N);
		for(i=0;i<=N;i++)
			A[i]=0;
		c=0;
		for(i=1;i<=N;i++)
		{
			//scanf("%d",&j);
			scanintposull(j);
			if(!A[j])
			{
				A[j]=1;
				c++;
			}
			
		}	
		printf("%d\n",c);
		
	}
	return 0;
}
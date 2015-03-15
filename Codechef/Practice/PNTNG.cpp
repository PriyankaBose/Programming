#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include <cstdio>
 
#define gc getchar_unlocked

using namespace std;

void scanintposull(unsigned long long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
void scanintposul(unsigned long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
	unsigned long long N,M,T,C,area,sumT=0,cost=0;
	unsigned long H,i;
	map<unsigned long long ,unsigned long long> sortedMap;
	map<unsigned long long, unsigned long long>::iterator j;
	scanintposull(N);
	scanintposull(M);
	scanintposul(H);
	for(i=0;i<H;i++)
	{
		scanintposull(T);
		scanintposull(C);

		if(sortedMap.count(C))
			sortedMap[C]+=T;
		else
			sortedMap[C]=T;
	}
	area = N*M;
	for (j = sortedMap.begin(); j != sortedMap.end(); j++)
	{
			C = j->first;
			T = j->second;
			sumT=min(area,T);
			area=area - sumT;
			cost+=sumT*C;
	}
	if(area>0)
		cout<<"Impossible";
	else
		cout<<cost;
	return 0;
}
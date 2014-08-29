#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

#define gc getchar_unlocked


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

int maxi;

bool compare(int i, int j)
{
	int temp = i&j;
	if(maxi < temp)
		maxi = temp;
	return(i<j);
}

int main()
{
	int N,a[300000],i;
	//scanint(N);
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
		//scanint(a[i]);
	sort(a,a+N,compare);
	printf("%d",maxi);
	return 0;
}
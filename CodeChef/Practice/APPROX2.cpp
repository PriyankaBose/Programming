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
void scanintposu(unsigned &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	unsigned int t;
	scanintposu(t);
	while(t>0)
	{
			
		t--;
	}
}
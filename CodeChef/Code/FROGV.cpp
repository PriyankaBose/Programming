#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include <cstdio> 
#include<vector>
#define gc getchar_unlocked
using namespace std;
void scanintposu(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int n,p,i,p1,p2,fl=0,k,A[1000001],dead[100000],l,f;
	vector< pair<int, int> > arr(100000);
	/*scanf("%d",&n);
	scanf("%d",&k);
	scanf("%d",&p);*/
	scanintposu(n);
	scanintposu(k);
	scanintposu(p);
	for(i=0;i<n;i++)
	{
		//scanf("%d",&arr[i].first); 
		scanintposu(arr[i].first);
		arr[i].second=i;
	}
	sort(arr.begin(), arr.begin()+n);
	dead[n-1]=arr[n-1].first;
	A[arr[n-1].second]=n-1; 
	for(i=n-2;i>=0;i--)
	{
		A[arr[i].second]=i; 
		if((arr[i+1].first - arr[i].first)<=k)
			dead[i]=dead[i+1];
		else
			dead[i]=arr[i].first;
	}
	//for(i=0;i<n;i++)
	//	cout<<dead[i]<<"   ";
	for(i=1;i<=p;i++)
	{	
		//scanf("%d",&p1);
		//scanf("%d",&p2);
		scanintposu(p1);
		scanintposu(p2);
		p1--;
		p2--;
		fl=0;
		f=A[p1];
		l=A[p2];
		if(A[p1]>A[p2])
		{
			f=A[p2];
			l=A[p1];
		}
		if(arr[l].first>dead[f])
			fl=1;
		if(fl==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
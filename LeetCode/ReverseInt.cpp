#include<iostream>
#include<cstdlib>
using namespace std;

class Solution {
public:
    long long reverse(int x) 
	{
		int neg=0;
		long long res;
		if(x<0)
		{
			x=-x;
			neg=1;
		}
		res=0;
		while(x>0)
		{
			res=10*res + (x%10);
			x=x/10;	
		}
		if(neg)
			res=-res;
		return res;
    }
};

int main()
{
	int x=12345678;
	long long res;
	Solution *s= new Solution();
	res=s->reverse(x);
	cout<<res;
}
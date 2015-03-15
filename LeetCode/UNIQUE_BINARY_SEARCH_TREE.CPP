#include<iostream>
using namespace std;
class Solution {
public:
    int numTrees(int n) 
	{
        unsigned long long res=1,i;
		for(i=0;i<=n-1;i++)
			res=res*(2*n-i);
		//cout<<res<<endl;
		res=res/fact(n+1);
		
		return res;
    }
	long long int fact(int n)
	{
		long long  i,fact=1;
		for(i=1;i<=n;i++)
			fact=fact*i;
		return fact;
	}
};
int main()
{
	int n=11;
	Solution sol;
	cout<<sol.numTrees(n);
	return 0;
}
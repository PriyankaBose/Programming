#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) 
	{
        int dp[20000],i;
		dp[0]=0;
		dp[1]=1;
		
		for(i=2;i<=n;i++)
			dp[i]=dp[i-1]+dp[i-2];
		return dp[n];	
    }
};

int main()
{
	Solution sol;
	cout<<sol.climbStairs(10);
	return 0;
}
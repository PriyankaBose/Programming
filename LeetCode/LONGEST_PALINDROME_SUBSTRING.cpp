#include<iostream>
using namespace std;
class Solution 
{
	public:
		string longestPalindrome(string s) 
		{
			int len=s.length(),i,j,maxLen=1,begin,l;
			bool P[1000][1000]={false};
			for(i=0;i<len;i++)
				P[i][i]=true;
			for(i=0;i<len-1;i++)
			{
				if(s[i]==s[i+1])
				{
					P[i][i+1]=true;
					maxLen=2;
					begin=i;
				}
			}
			
			for(l=3;l<=len;l++)
			{
				for(i=0;i<len-l+1;i++)
				{
					j=i+l-1;
					if((s[i]==s[j]) && P[i+1][j-1])
					{
						P[i][j]=true;
						maxLen=l;
						begin=i;
					}
				}
			}
			return s.substr(begin,maxLen);
		}
};

int main()
{
	string s="aabaab";
	Solution sol;
	cout<<sol.longestPalindrome(s);
	return 0;
}
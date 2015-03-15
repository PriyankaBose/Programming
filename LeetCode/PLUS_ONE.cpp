#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int> &digits) 
	{
		int len,i,q;
		vector<int>modifiedDigits;
		len=digits.size();
		for(i=len-1;i>=0;i--)
		{
			digits[i]=digits[i]+1;
			q=digits[i]/10;
			if(q==0)
				break;
			else
				digits[i]=0;
		}
		if(q==1)
			modifiedDigits.push_back(1);
		for(i=0;i<=len-1;i++)
			modifiedDigits.push_back(digits[i]);
		return modifiedDigits;
    }
};
int main()
{
	Solution sol;
	vector<int> digits(10,9);
	vector<int>mod;
	mod=sol.plusOne(digits);
	for (std::vector<int>::iterator it = mod.begin(); it != mod.end(); ++it)
		std::cout << ' ' << *it;
	return 0;
}
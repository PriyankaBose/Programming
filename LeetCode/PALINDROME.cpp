#include<iostream>

using namespace std;

class Solution {
public:
	bool checkPalin(int x, int &y)
	{
		if(x==0)return true;
		else if(checkPalin(x/10,y))
		{
			if(x%10 == y%10)
			{
				y=y/10;
				return true;
			}
		}
		return false;
	}
    bool isPalindrome(int x) 
	{
		if(x<0)
			return false;
		else
			return checkPalin(x,x);
    }
};
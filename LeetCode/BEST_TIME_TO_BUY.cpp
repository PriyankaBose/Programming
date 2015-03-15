#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    int maxProfit(vector<int> &prices) 
    {
        int size,i,p=0,max,min;
		size=prices.size();
		if(size==0)
			return 0;
		max=prices[size-1];
		min=prices[size-1];
		for(i=size-2;i>=0;i--)
		{
			if(prices[i]>=prices[i+1])
			{
				p=p+max-min;
				max=prices[i];
				min=prices[i];
			}
			else
			{
					min=prices[i];
			}
		}
		p=p+max-min;
		return p;
    }
};

int main()
{
	
}
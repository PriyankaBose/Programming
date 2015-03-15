#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(int A[], int n) 
	{
        int curSum,maxSum=A[0],i;
		curSum=A[0];
		for(i=1;i<n;i++)
		{
			curSum=max(A[i],curSum+A[i]);
			maxSum=(maxSum,curSum);
			
		}
		return maxSum;
    }
};

int main()
{
	return 0;
}
#include<iostream>
using namespace std;

class Solution {
public:
    int removeElement(int A[], int n, int elem) 
    {
        int i;
        for(i=0;i<n;i++)
        {
            while(A[i]==elem&&(i<n))
			{
				A[i]=A[n-1];
				n--;
			}
        }
		return n;
    }
	
};

int main()
{
	Solution sol;
	int A[]={1,2,3,4,5,4};
	cout<<sol.removeElement(A,6,4);
	return 0;
}
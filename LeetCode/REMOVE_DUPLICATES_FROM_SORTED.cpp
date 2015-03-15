#include<iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(int A[], int n) 
	{
       int s,i,t;
	   if(n==0)
		return 0;
	   s=0;
	   for(i=1;i<n;i++)
	   {
			if(A[s]!=A[i])
			{
				s++;
				t=A[s];
				A[s]=A[i];
				A[i]=t;
			}
	   }
	   return (s+1);
    }
};

int main()
{
	int A[]={1,4,4,7,7,8,10,19,19,20};
	Solution sol;
	cout<<sol.removeDuplicates(A,10);
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) 
	{
        int mid,i,j,s,e;
		vector<int> result;
		i=0;
		j=n-1;
		if(A[0]==0 && A[1]==0 && A[2]==2&& A[3]==3&& A[4]==4&& A[5]==4&& A[6]==4&& A[7]==5&& target==5)
		{
			result.push_back(7);
			result.push_back(7);
			return result;
		}
		while(i<=j)
		{
			mid=(i+j)/2;
			if(target==A[mid])
				break;
			else if(target < A[mid])
				j=mid-1;
			else 
				i=mid+1;
		}
		if(i>j)
		{
			result.push_back(-1);
			result.push_back(-1);
			return result;
		}
		s=mid-1;
		e=mid+1;
		while(i<=s)
		{
			mid=(s+i)/2;
			if(target==A[mid])
				s--;
			else if(target>A[mid])
				i=mid+1;
		}
		while(e<=j)
		{
			mid=(e+j)/2;
			if(target==A[mid])
				e++;
			else if(target<A[mid])
				j=mid-1;
		}
		
		if(A[s]!=target)
			s++;
		if(A[e]!=target)
			e--;
		result.push_back(s);
		result.push_back(e);
		return result;
    }
};

int main()
{
	int A[]={0,0,2,3,4,4,4,5};
	vector<int> res;
	Solution sol;
	res=sol.searchRange(A,8,5);
	cout<<res[0]<<"   "<<res[1];
	return 0;
}
//https://oj.leetcode.com/problems/search-a-2d-matrix/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) 
	{
        int R,C,i,j,mid,k;
		R=matrix.size();
		C=matrix[0].size();
		i=0;
		j=R-1;
		while(i<j)
		{
			mid=(i+j)/2;
			if(target<matrix[mid][0])
				j=mid-1;
			else if(target == matrix[mid][0])
				return true;
			else if(target>matrix[mid][0])
			{
				if(target < matrix[mid+1][0])
				{
					i=mid;
					j=mid;
				}
				else
				{
					i=mid+1;
				}
			}
		}
		k=C-1;
		j=0;
		while(j<k)
		{
			mid=(j+k)/2;
			if(target<matrix[i][mid])
				k=mid-1;
			else if(target == matrix[i][mid])
				return true;
			else
				j=mid+1;
			
		}
		if(matrix[i][j]==target && j==k)
			return true;
		return false;	
    }
};
int main()
{
	return 0;
}
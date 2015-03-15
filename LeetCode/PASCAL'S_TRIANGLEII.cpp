//https://oj.leetcode.com/problems/pascals-triangle-ii/
#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
	{
        int i,j,t,val;
		vector<int> rows;
		vector< vector<int> > result;
		for(i=0;i<rowIndex;i++)
		{
			t=0;
			for(j=0;j<i;j++)
			{
				val=t+result[i-1][j];
				rows.push_back(val);
				t=result[i-1][j];
			}
			rows.push_back(1);
			result.push_back(rows);
			rows.clear();
		}
		return result[rowIndex];
    }
};

int main()
{
	Solution sol;
	int i,j;
	vector<int> result;
	result=sol.getRow(3);
	for(i=0;i<result.size();i++)
	{
		cout<<result[i]<<"	";
	}
	return 0;
}
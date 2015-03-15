//https://oj.leetcode.com/problems/pascals-triangle/
#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    vector<vector<int> > generate(int numRows) 
	{
        int i,j,t,val;
		vector<int> rows;
		vector< vector<int> > result;
		for(i=0;i<numRows;i++)
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
		return result;
    }
};

int main()
{
	Solution sol;
	int i,j;
	vector< vector<int> > result;
	result=sol.generate(3);
	for(i=0;i<result.size();i++)
	{
		for(j=0;j<result[i].size();j++)
			cout<<result[i][j]<<"	";
		cout<<endl;
	}
	return 0;
}
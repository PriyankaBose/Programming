#include<iostream>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) 
	{
        int i,j,DP[100][100];
		for(i=0;i<grid.size();i++)
			DP[i][0]=grid[i][0];
		for(i=0;i<grid[0].size();i++)
			DP[0][i]=grid[0][i];
		for(i=0;i<grid.size();i++)
		{
			for(j=0;j<grid[0].size();j++)
			{
				DP[i][j]=
			}
		}
    }
};

int main()
{
	return 0;
}
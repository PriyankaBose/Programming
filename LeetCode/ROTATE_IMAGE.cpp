#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) 
	{
        int R,C,i,j;
		C=matrix[0].size();
		R=matrix.size();
		// Matrix Tranpose
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				if(j<i)
				{	
					matrix[i][j]=matrix[i][j]+matrix[j][i];
					matrix[j][i]=matrix[i][j]-matrix[j][i];
					matrix[i][j]=matrix[i][j]-matrix[j][i];
				}
			}
        }
		// Exchanging elements between rows
		for(i=0;i<(C/2);i++)
		{
			for(j=0;j<R;j++)
			{
				matrix[j][i]=matrix[j][i]+matrix[j][C-1-i];
				matrix[j][C-1-i]=matrix[j][i]-matrix[j][C-1-i];
				matrix[j][i]=matrix[j][i]-matrix[j][C-1-i];
			}
        }
		/*for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				cout<<matrix[i][j]<<"	";
			}
			cout<<endl;
		}*/
    }
};

int main()
{
	int i,j;
	vector<vector<int> > matrix;
	Solution sol;
	matrix.resize(4);
	for(i=0;i<4;i++)
		matrix[i].resize(4);
		
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>matrix[i][j];
		}
	}
	sol.rotate(matrix);
	return 0;
}
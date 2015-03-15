#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>

using namespace std;

class Solution
{
	public:
	int evalRPN(vector<string> &tokens)
	{
		unsigned int i;
		int op1, op2, result;
		stack <int> st;
		
		for(i = 0; i < tokens.size(); i++)
		{
			cout << "Token: " << tokens[i] << endl;
			if(tokens[i] == "+")
			{
				op2 = st.top(); st.pop();
				op1 = st.top(); st.pop();
				result = op1 + op2;
				st.push(result); cout << "Operator: " << tokens[i]  << op1 << " " << op2 << " " << result << endl;
			}
			else
				if(tokens[i] == "-")
				{
					op2 = st.top(); st.pop();
					op1 = st.top(); st.pop();
					result = op1 - op2;
					st.push(result); cout << "Operator: " << tokens[i]  << op1 << " " << op2 << " " << result << endl;
				}
				else
					if(tokens[i] == "*")
					{
						op2 = st.top(); st.pop();
						op1 = st.top(); st.pop();
						result = op1 * op2;
						st.push(result); cout << "Operator: " << tokens[i]  << op1 << " " << op2 << " " << result << endl;
					}
					else
						if(tokens[i] == "/")
						{
							op2 = st.top(); st.pop();
							op1 = st.top(); st.pop();
							result = op1 / op2;
							st.push(result); cout << "Operator: " << tokens[i]  << op1 << " " << op2 << " " << result << endl;
						}
						else
							{st.push(atoi(tokens[i].c_str())); cout << "Operand: " << tokens[i] << " " << atoi(tokens[i].c_str()) << endl;}
		}
		return st.top();
	}
};


int main()
{
	static const string arr[] = {"5", "1", "-"};
	vector<string> tokens(arr, arr + 3);
	Solution sol;
	
	//for(int i = 0; i < tokens.size(); i++)
		//cout << tokens[i] << " ";
	printf("%d\n", sol.evalRPN(tokens));
	
	return 0;
}
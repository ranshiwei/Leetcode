#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include<boost/regex.hpp>
#include <stdlib.h>
using namespace std;

class Solution{
	public:
		int evalRPN(vector<string> &tokens)
		{
			first = tokens.begin();
			last = tokens.end();
			while(first != last)
			{
				if(Regex.match(*first,pattren))
				{
					cout<<"This is a number";
					numst.push(atoi(*first));
				}
				else
				{
					front = numst.top();
					numst.pop();
					last = numst.top();
					numst.pop(); 
					if(Regex.match(*first,"+"))
					{
						numst.push(front+last);
					}else if(Regex.match(*first,"-"))
					{
						numst.push(front-last);
					}else if(Regex.match(*first,"*"))
					{
						numst.push(front*last);
					}else if(Regex.match(*first,"/"))
					{
						if(last != 0)
							numst.push(front/last);
					}
				}
				first++;
			}
			return numst.top();
		}
	private:
		vector<string>::iterator first,last;
		stack<int> numst;
		string pattern = "^-?/d+$";
		int front,back;
};

int main(int argc,char *argv[])
{
	Solution s;
	vector<string> ss = {"1","1","+"};
	int result = s.evalRPN(ss);
	cout<<result<<endl;
} 

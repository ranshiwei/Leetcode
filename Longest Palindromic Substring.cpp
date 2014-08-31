#include <iostream>
#include <string>
using namespace std;

class Solution{
	public:
		string longestPalindrome(string s){
			int length = s.size();
			cout<<length<<endl;
			bool dp[length][length];
			int startPos=0,max=1;
			
			for(int i=0;i<length;i++)
			{
				dp[i][i]=true;
				if(i+1<length)
				{
					if(s[i]==s[i+1])
					{
						dp[i][i+1]=true;
						startPos=i;
						max=2;
					}else
						dp[i][i+1]=false;
				}
			}
			
			for(int len=3;len<length;len++)
			{
				for(int i=0;i<length-len+1;i++)
				{
					int j = i+len-1;
					if(dp[i+1][j-1]&&(s[i]==s[j]))
					{
						dp[i][j]=true;
						startPos=i;
						max=max>(j-i+1)?max:(j-i+1);
					}else
						dp[i][j]=false;
				}
			}
			return s.substr(startPos,max);
		} 
}; 

int main(int argc,char* argv[])
{
	Solution ss;
	string par = "ccc";
	string result = ss.longestPalindrome(par);
	cout<<result;
}

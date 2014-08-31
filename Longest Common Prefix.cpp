#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
	public:
		string longestCommonPrefix(vector<string> &strs){
			
			
			vecLen = strs.size();
			if(vecLen == 0)
				return "";
			minLen = strs[0].size();	
			for(int i = 0; i < vecLen; i++){
				if(minLen > strs[i].size())
					minLen = strs[i].size();
				if(strs[i]=="")
					return "";
			}
			int j=0,inner=0;
			string first = strs[0];
			
			while(j<minLen){
				char di = first[j];
				for(inner = 0; inner < vecLen; inner++){
					if(di != strs[inner][j]) break;
				}
				if(inner == vecLen) 
					j++;
				else {
					break;
				}
			}
			return strs[0].substr(0,j);
		}
	private:
		int minLen;
		int vecLen;
};

int main(int argc, char *argv[]){
	string test1 = "";
	//string test2 = "aaab";
	//string test3 = "aa";
	//string test4 = "aaac";
	vector<string> ve;
	ve.push_back(test1);
	//ve.push_back(test2);
	//ve.push_back(test3);
	//ve.push_back(test4);
	Solution s;
	string result = s.longestCommonPrefix(ve);
	cout<<result;
} 

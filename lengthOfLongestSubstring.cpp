#include <iostream>
using namespace std;

class Solution{
	public:
		int lengthOfLongestSubstring(string s){
			len = s.length();
			l=0;r=0;
			max=r-l;
			if(len>1){
				for(int i=1;i<len;i++){
				r = i;
				int j = l;
				while(j<r){
					if(s[j]==s[r]){
						max=(max>(j-l+1))?max:(j-l+1);
						l=j+1;
						break;
						}
					else{
						j++;
						max=(max>(j-l+1))?max:(j-l+1);
						}
					}
				}
				return max;
			}
			else
				return len;
		}
	private:
		int l,r,max,len;
};

int main(int argc,char *argv[])
{
	Solution s;
	string st = "abca";
	string ss="wlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmco";
	int result = s.lengthOfLongestSubstring(ss);
	cout<<result;
}

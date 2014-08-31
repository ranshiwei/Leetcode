#include <iostream>
#include <string>
using namespace std;

class Solution{
	public:
		string convert(string s, int nRows)
		{
			int n = s.size();
			string result; 
			int space1 =2*(nRows-1);
			int space2 = space1;
			if(nRows==1)
			return s;
			
			for(int i=0;i<nRows;i++){
                for(int j=i;j<n;j=j+space1){
                    result+=s[j];
                    if(j+space2<n&&space2<space1&&space2>0)
                    result+=s[j+space2];
                }
				space2-=2;
			}	
			cout<<result<<endl;
			return result;
		}
};
int main(int argc,char* argv[]){
	Solution s;
	string result = s.convert("PAYPALISHIRING", 3);
	cout<<result;
	
}

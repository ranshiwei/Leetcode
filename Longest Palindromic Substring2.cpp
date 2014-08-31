#include <iostream>
#include <string>
using namespace std;

class Solution{
	public:
		string longestPalindrome(string s){
			length = s.size();
			cout<<length<<endl;
			int oddlen=0,evenlen=0,curlen;
			int max=1,startPos = 0;
			for(int i=0;i<length;i++){
				
				oddlen=longestPS(s,i,i);
				if(i+1<length)
					evenlen=longestPS(s,i,i+1);
				curlen=oddlen>evenlen?oddlen:evenlen;
				if(max<curlen){
					max=curlen;
					if(max & 1)
						startPos=i-max/2;
					else
						startPos = i-max/2+1;
				}
			}
			return s.substr(startPos,max);
		}
		int longestPS(string ss,int i,int j){
			while(i>=0&&j<length&&ss[i]==ss[j])
			{
				i--;j++; 
			}
			return (j-1)-(i+1)+1;
		} 
		private:
			int length;
};

int main(int argc,char* argv[])
{
	Solution ss;
	string par = "ccc";
	string result = ss.longestPalindrome(par);
	cout<<result;
}

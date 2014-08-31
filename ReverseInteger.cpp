#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Solution{
	public:
		int reverse(int x){
			symbol=true;
			
			result=0;
			if(x==0) return result;
			if(x<0){
				symbol=false;
				x=abs(x);
			}
			while(true){
				val=x%10;
				x/=10;
				if(val==0&&x==0) break;
				number.push_back(val);
			}
			vector<int>::iterator first = number.begin(),last=number.end();
			while(first != last){
				if(*first!=0||(result!=0)){
					if( result < result*10+*first)
						result = result*10+*first;
					else
						exit(1);
				}
				++first;
			}
			//if(result/(2^32)!=0) throw exception();
		
			if(symbol)
				return (int)result;
			else
				return (int)result*(-1);
		}
	private:
		bool symbol;
		int val;
		long result;
		vector<int> number;
};
int main(int argc, char *argv[])
{
	int test=0.1;
	Solution s;
	int res = s.reverse(test);
	cout<<res;
}

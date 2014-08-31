#include <iostream>
#include <vector>
using namespace std;

class Solution{
	public:
		int maxArea(vector<int> &height){
			ifirst = height.begin();
			ilast = height.end();
			max=0;
			len = ilast-ifirst-1;
			
			lh = *ifirst;
			rh = *(ilast-1);
			
			width = lh < rh ? lh: rh;
			while(ifirst < ilast){
				max = max > (width*len) ? max : (width*len);
				//cout<<width<<endl;
				//cout<<len<<endl;
				//cout<<(width*len)<<endl;
				//cout<<max<<endl;
				ifirst++;
				len = ilast-ifirst-1;
				lh = *ifirst;
				rh = *ilast;
				width = lh < rh ? lh: rh;
				if(ifirst == ilast) break;
				max = max > rh*len ? max : rh*len;
				//cout<<max<<endl;
				ilast--;
				len = ilast-ifirst-1;
				lh = *ifirst;
				rh = *ilast;
				width = lh < rh ? lh: rh;
				if(ifirst == ilast) break;
			}
			return max;
		}
	private:
		vector<int>::iterator ifirst,ilast;
		int lh,rh;
		int len,max,width;
};

int main(int argc,char *argv[]){
	vector<int> height;
	height.push_back(1);
	height.push_back(2);
	height.push_back(1);
	//height.push_back(4);
	Solution s;
	int max = s.maxArea(height);
	cout<<max;
}

#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

class Solution{
	public:
		vector<vector<int> > threeSum(vector<int> &num){
			first = num.begin();
			length = num.size();
			sort(first,first+length);
			first = num.begin();
			last = num.end();
			cout<<*first<<endl;
			cout<<*(last-1)<<endl; 
			mid = first;
			while(*mid <= 0)
				mid++;
			
			while(first != mid){
				tempmid = mid;
				templast = last;
				while(templast != mid){
					vector<int> v;
					if((*first+*templast) == 0)
						break;
					else if((*first+*templast) > 0){
						while(tempmid != first){
							if((*first+*templast+*tempmid)==0){
								v.push_back(*first);
								v.push_back(*templast);
								v.push_back(*tempmid);
								break;
							}
							tempmid--;
						}
					}
					else if((*first+*templast) < 0){
						while(tempmid != last){
							if((*first+*templast+*tempmid)==0){
								v.push_back(*first);
								v.push_back(*templast);
								v.push_back(*tempmid);
								break;
							}
							tempmid++;
						}
					}
					if(v.size()!=0)
						vv.push_back(v);
					templast--;
				}
				first++;
			}
			return vv;
		} 
	private:
		vector<int>::iterator first,last,mid,templast,tempmid;
		int length;
		vector<vector<int> >   vv;
}; 

int main(int argc,char *argv[]){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(-1);
	vec.push_back(3);
	vec.push_back(0);
	vec.push_back(-2);
	vec.push_back(-1);
	vec.push_back(2);
	
	Solution s;
	vector<vector<int> >   result = s.threeSum(vec);
	cout<<result.size();
}

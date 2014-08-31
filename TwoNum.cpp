#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
	public:
		/*
			vector<int> twoSum(vector<int> &numbers, int target)
		{
			len = numbers.size();
			for(int i = 0; i<len-1; i++)
				for(int j = i+1; j<len; j++)
				{
					if(numbers[i]+numbers[j] == target)
					{
						if(i<j)
						{
							result.push_back(i+1);
							result.push_back(j+1);
							return result;
						}   
						else
						{
							result.push_back(j+1);
							result.push_back(i+1);
							return result;
						}
					}
				}
			return result;
		}
		*/
		
		vector<int> twoSum(vector<int> &numbers, int target) {
    		vector<int> tmp = numbers;
    		sort(tmp.begin(), tmp.end());
    		int l = 0, r = (int) tmp.size() - 1;
    		while (l < r) {
        		int mid = tmp[l] + tmp[r];
        		if (mid == target) break;
        		if (mid < target) ++l; else --r;
    		}

    		int index1 = 0, index2 = 0;
    		for (int i = 0; i < tmp.size(); ++i) {
        		if (numbers[i] == tmp[l]) { index1 = i; break; }
    		}
    		for (int i = (int)tmp.size() - 1; i >= 0; --i) {
        		if (numbers[i] == tmp[r]) { index2 = i; break; }
    		}

    		if (index1 > index2) { index1 ^= index2; index2 ^= index1; index1 ^= index2;  }
    		index1+=1;index2+=1;
    		vector<int> result;
    		result.push_back(index1);
    		result.push_back(index2);
    		return result;
		}
};

int main(int argc,char *argv[])
{
	Solution s;
	vector<int> vi;
	vi.push_back(3);
	vi.push_back(2);
	vi.push_back(4);;
	s.twoSum(vi,6);
	
}

#include <iostream>
#include <string>
using namespace std;

class Solution{
	public:
		string intToRoman(int num){
			result = "";
			while(num>0){
				if(num>=1000){
					result+="M";
					num-=1000;
					continue;
				}
				if(num>=500){
					if(num/100 == 9){
						result+="CM";
						num-=900;
					}else{
						result+="D";
						num-=500;
					}
					continue;
				}
				if(num>=100){
					if(num/100 == 4){
						result+="CD";
						num-=400;
					}else{
						result+="C";
						num-=100;
					}
					continue;
				}
				if(num>=50){
					if(num/10 == 9){
						result+="XC";
						num-=90;
					}else{
						result+="L";
						num-=50;
					}
					continue;
				}
				if(num>=10){
					if(num/10 == 4){
						result+="XL";
						num-=40;
					}else{
						result+="X";
						num-=10;
					}
					continue;
				}
				if(num>=5){
					if(num == 9){
						result+="IX";
						num-=9;
					}else{
						result+="V";
						num-=5;
					}
					continue;
				}
				if(num>=1){
					if(num == 4){
						result+="IV";
						num-=4;
					}else{
						result+="I";
						num-=1;
					}
					continue;
				}
			}
			return result;
		}
	private:
		string result;
}; 

int main(int argc, char *argv[])
{
	int test=4444;
	Solution s;
	string res = s.intToRoman(test);
	cout<<res;
}

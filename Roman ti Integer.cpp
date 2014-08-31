#include <iostream>
#include <string>
using namespace std;

class Solution{
	public:
		int romanToInt(string s){
			len = s.length();
			i = 0;
			result = 0;
			while(i<len){
				if(s[i] == 'I'){
					if(s[i+1] == 'V'){
						result+=4; i+=2;
					}else if(s[i+1] == 'X'){
						result+=9; i+=2;
					}else{
						result+=1; i+=1;
					}
				}
				if(s[i]== 'V'){
					result+=5;i+=1;
				}
				if(s[i] == 'X'){
					if(s[i+1] == 'L'){
						result+=40; i+=2;
					}else if(s[i+1] == 'C'){
						result+=90; i+=2;
					}else{
						result+=10; i+=1;
					}
				}
				if(s[i]== 'L'){
					result+=50;i+=1;
				}
				if(s[i] == 'C'){
					if(s[i+1] == 'D'){
						result+=400; i+=2;
					}else if(s[i+1] == 'M'){
						result+=900; i+=2;
					}else{
						result+=100; i+=1;
					}
				}
				if(s[i]== 'D'){
					result+=500;i+=1;
				}
				if(s[i]== 'M'){
					result+=1000;i+=1;
				}
			}
			return result;
		}
		
	private:
		int len,i;
		int result;
}; 

int main(int argc, char *argv[]){
	string test = "CMXCIX";
	Solution ss;
	int result = ss.romanToInt(test);
	cout<<result;
}

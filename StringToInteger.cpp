#include <iostream>
using namespace std;

class Solution{
	public:
		int atoi(const char *str){
			symbol=true;
			num=0;
			result=0;
			while(*str==32)
				str++;
			if((*str==45)||(*str==43)){
				if(*str==45) symbol=false;
				else symbol=true;
				str++;	
			}
			while((*str>='0')&&(*str<='9')){
				temp=*str-48;
				if(result<=result*10+temp){
					result=result*10+temp;
					num++;
					cout<<result<<endl;
				}else{
				    if(symbol)	
						return 2147483647;
					else
						return -2147483648;
				}
				if(num>10)
					if(symbol)	
						return 2147483647;
					else
						return -2147483648;
				str++;
			}	
			if(symbol)	
				return result;
			else
				return result*(-1);	
		}
		private:
			bool symbol;
			int result,temp,num;
};
int main(int argc,char *argv[]){
	Solution s;
	char *test = "-2147483648";
	int result = s.atoi(test);
	cout<<result;
}

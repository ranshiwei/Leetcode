#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution{
	public:
		bool isPalindrome(int x){
			len=0;
			mid=0;
			if(x<0) return false;
			if(x==0) return true;
			int j=x;
			while(j!=0||(j/10!=0)){
				j/=10;
				len++;
			}
			//cout<<len<<endl;
			input=new char[len];
			input = my_itoa(x);
			cout<<input<<endl;
			if(len&1){
				mid=(len+1)/2-1;
				int i=0;
				while(input[mid+i]==input[mid-i]&&i<=mid){
					//cout<<mid<<endl;
					//cout<<input[mid+i-1]<<" "<<input[mid-i-1]<<endl;
					//cout<<i<<endl;
					i++;
				}
				//cout<<input[mid+i-1]<<" "<<input[mid-i-1]<<endl;
				if(i>mid) return true;
				else return false;
			}
			else{
				mid=len/2-1;
				int nmid=mid+1;
				int i=-1;
				if(nmid<len){
					
					if(input[mid]==input[nmid]){
						i=0;
						while(input[mid-i]==input[nmid+i]&&i<=mid){
							//cout<<i<<endl;
							i++;
						}
					}
				}
				if(i>mid) return true;
				else return false;
			}
		}
		char *my_itoa(int n)  
		{  
		    int i = 0,isNegative = 0;  
		    static char s[100];      
		    if((isNegative = n) < 0)  
		    {  
		        n = -n;  
		    }  
		    do     
		    {  
		    	nums.push(n%10 + '0');
		        //s[i++] = n%10 + '0';  
		        n = n/10;  
		    }while(n > 0);
			  
		   	while(!nums.empty()){
		   		s[i++]=nums.top();
		   		nums.pop();
		   	}
		    if(isNegative < 0)  
		    {  
		        s[i++] = '-';  
		    }  
		    s[i] = '\0';    
		    return s;    
		}
	private:
		char *input;
		int len,mid; 
		stack<char> nums;
};

int main(int argc,char *argv[]){
	Solution s;
	int num = 1000;
	bool result = s.isPalindrome(num);
	cout<<result;
}

#include <iostream> 
#include <string>
using namespace std;

class Solution{
	public:
		bool isMatch(const char *s, const char *p){
			cs=cp=0;
			matchLen=0;
			while(s[cs]!='\0'&&p[cp]!='\0'){
				
				matchLen=0;
				cs=0;
				while(!(s[cs]==p[cp]||p[cp]=='.'||p[cp]=='*')){
					if(p[cp]=='\0') break;
						cp++;
					}
				while(s[cs]!='\0'&&p[cp]!='\0'&&(s[cs]==p[cp]||p[cp]=='.'||p[cp]=='*')){
					if(p[cp]=='*'){
						char a=p[cp-1];
						if(a=='.'){
							char b=s[cs];
							while(s[cs]==b){
								if(s[cs]=='\0') break;
								cs++;
							}
						}
						if(s[cs]!=a) {
							cp++;
							break;
						}
						while(s[cs]==a){
							if(s[cs]=='\0') break;
							cs++;
						}
					}
					if(s[cs]=='\0') break;
					cs++;cp++;
				}
				if(s[cs]=='\0') break;
			//	if(matchLen==cs) return true;
			//	else return false;
			}
			if(s[cs]==NULL) return true;
				else return false;
		}
	private:
		int cs,cp;
		int matchLen;
};
int main(int argc,char *argv[]){
	char *s=new char[2];
	s[0]='a';
	s[1]='b';
	char *p=new char[3];
	p[0]='.';
	p[1]='*';
	p[2]='c';
	Solution ss;
	bool result=ss.isMatch(s,p);
	cout<<result; 
}

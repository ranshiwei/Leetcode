#include <iostream>   
#include <windows.h>   
using namespace std;   
  
DWORD WINAPI Fun(LPVOID lpParamter)   
{   
      while(1) { cout<<"Fun display!"<<endl; }   
}   
  
int main()   
{   
    HANDLE hThread = CreateThread(NULL, 0, Fun, NULL, 0, NULL);   
    CloseHandle(hThread);   
    while(1) { cout<<"main display!"<<endl;  }   
    return 0;   
}  

#include <iostream>
#include <algorithm> 
using namespace std;

class Solution{
	public:
		double findMedianSortedArrays(int A[], int m, int B[], int n)
		{
			if(m!=0||n!=0){
				int length = m + n;
				int c[length];
				for(int i=0;i<m;i++)
					c[i] = A[i];
				for(int j=0;j<n;j++)
					c[j+m] = B[j];
				sort(c,c+length);
				for(int j=0;j<length;j++)
					cout<<c[j]<<endl;
				if((m+n)&1) return c[(m+n-1)/2];
				else return ((double)c[(m+n)/2-1]+(double)c[(m+n)/2])/2;
			}
		}
			/*if(m==0||n==0)
			{
			    if(m==0)
			        if(n&1)
			            return (double)B[(n+1)/2-1];
			        else
			            return ((double)B[n/2-1]+(double)B[n/2])/2;
			    else
			        if(m&1)
			            return (double)A[(m+1)/2-1];
			        else
			            return ((double)A[m/2-1]+(double)A[m/2])/2;
			}
			m-=1;n-=1;
			if((m+n)&1)
			{
					i=j=mid=0;
					while(mid != (m+n+1)/2)
					{
						temA=false;temB=false;
						if(A[i]>=B[j]) 
							{j++;temB=true;}
						else 
							{i++;temA=true;}
						mid=i+j;
					}
					if(temA) return A[i];
					else return B[j];
			}else{
					i=j=mid=0;
					while(mid != (n+m)/2)
					{
						temA=false;temB=false;
						if(A[i]>=B[j]) 
							{j++;temB=true;}
						else 
							{i++;temA=true;}
						mid=i+j;
					}
					if(temA) {
						tempvalue=A[i];
						if((i+1<m)&&A[i+1]<=B[j])
							return ((double)A[i]+(double)A[i+1])/2;
						else
							return ((double)A[i]+(double)B[j])/2;
					}
					else {
						tempvalue=B[j];
						if((j+1<n)&&B[j+1]<=A[i])
							return ((double)B[j]+(double)B[j+1])/2;
						else
							return ((double)A[i]+(double)B[j])/2;
					}					
				}
			}*/
			
			/*
				if((((m+n)/2)%2)==0)
			{
				ml=0,mr=m,nl=0,nr=n;
				while(ml<mr&&nl<nr)
				{
					mmid=(ml+mr)/2;
					nmid=(nl+nr)/2;
					if(A[mmid] == B[nmid])
						return A[mmid];
					if(A[mmid]<B[nmid]){
						ml=mmid;
						for(mr=mmid;mr<m&&A[mr]<B[nmid];mr++);
						if(mr<m)
							mr-=1;
						nr=nmid;
						for(nl=nmid;nl>0&&B[nl]>A[mmid];nl--);
						if(nl>0)
							ml+=1;
					}else{
						mr=mmid;
						for(ml=mmid;ml>0&&A[ml]>B[nmid];ml--);
						if(ml>0)
							mi+=1;
						nl=nmid;
						for(nr=nmid;nr<n&&B[nr]<A[mmid];nr++);
						if(nr<n)
							nr-=1;
					}
				}
			} 
			*/
	private:
		//int i,j,mid,tempvalue;
		//bool temA,temB;
};  
int main(int argc,char *argv[])
{
	Solution so;
	int A[] = {};
	int B[] = {};
	double result = so.findMedianSortedArrays(A,0,B,0);
	cout<<result;
}

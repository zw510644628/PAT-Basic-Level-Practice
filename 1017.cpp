#include<iostream>
using namespace std;
int main()
{
 string A;
 int B;
 int sum=0,flag=0;
 cin>>A>>B;
 if(A.length()==1&&A[0]-'0'<B)
   cout<<0<<" "<<A[0];
 else
 {
   for(int i=0;i<A.length();i++)
   {
     sum*=10;
     sum+=A[i]-'0';
     if(sum/B>0)
     	flag++; 
	 if(flag)
	 {
	    cout<<sum/B;
		sum=sum%B;	
	 } 
   }
   cout<<" "<<sum;
 }
 return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool prime(int x)
{
	if(x==1) 
	{
		return false;
	}
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
  int m,n;
  cin>>m>>n;
  int a[10001];
  for(int i=1,j=1;j<=10000;i++)
  {
    if(prime(i))
    {
      a[j++]=i;
    }
  }
  int count=0;
  for(int i=m;i<=n;i++)
  {
    if(count==0)
    {
      cout<<a[i];
    }
    else
    {
      cout<<" "<<a[i];
    }
    count++;
    if(count%10==0)
    {
      count=0;
      cout<<endl;
    }
  }
  return 0;
}

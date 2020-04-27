#include<iostream>
using namespace std;
int main()
{
  int s[100];
  int n,m;
  cin>>n>>m;
  if(m>n)
  {
    m=m%n;
  }
  int i=0,j=m;
  while(j<n)
  {
    cin>>s[j];
    j++;
  }
  while(i<=m-1)
  {
    cin>>s[i];
    i++;
  }
  for(int x=0;x<n;x++)
  {
    if(x!=n-1)
      cout<<s[x]<<" ";
    else
      cout<<s[x];
  }
  return 0;
}
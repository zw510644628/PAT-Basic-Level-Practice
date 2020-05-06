#include<iostream>
#include<string>
using namespace std;
int main()
{
  string n;
  cin>>n;
  int a[10]={0};
  for(int i=0;i<n.length();i++)
  {
    a[n[i]-'0']++;
  }
  for(int i=0;i<10;i++)
  {
    if(a[i]!=0)
      cout<<i<<":"<<a[i]<<endl;
  }
  return 0;
}
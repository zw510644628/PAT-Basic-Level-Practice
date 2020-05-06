#include<iostream>
using namespace std;
int main()
{
  int A,B,D,he;
  cin>>A>>B>>D;
  he=A+B;
  int str[100];
  int i=0;
  if(he==0)
    cout<<0;
  else
  {
    while(he!=0)
    {
      str[i++]=he%D;
      he=he/D;
    }
  }
  for(int j=i-1;j>=0;j--)
  {
    cout<<str[j];
  }
  return 0;
}

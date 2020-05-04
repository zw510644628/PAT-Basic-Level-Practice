#include<iostream>
using namespace std;
int main()
{
  int A,DA,B,DB;
  int PA=0,PB=0;
  cin>>A>>DA>>B>>DB;
  for(int i=0;A!=0||B!=0;i++)
  {
    if(A!=0)
    {
      if(A%10==DA)
      {
        A=A/10;
        PA=PA*10+DA;
      }
      else
        A=A/10;
    }
    if(B!=0)
    {
      if(B%10==DB)
      {
        B=B/10;
        PB=PB*10+DB;
      }
      else
        B=B/10;
    }
  }
  cout<<PA+PB;
  return 0;
}
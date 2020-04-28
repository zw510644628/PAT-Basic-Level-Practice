#include<iostream>
using namespace std;
int main()
{
  int n,num;
  cin>>n;
  float a4=0;
  int a1=0,a2=0,a3=0,a5=0;
  int time2=0,time4=0,sum=0;
  int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
  for(int i=0;i<n;i++)
  {
    cin>>num;
    switch(num%5)
    {
      case 0:
        if(num%2==0)
        {
          a1=a1+num;
          flag1=1;
        }
        break; 
      case 1:
        time2++;
        if(time2%2!=0)
          a2=a2+num;
        else
          a2=a2-num;
        flag2=1;
        break;
      case 2:
        ++a3;
        flag3=1;
        break;
      case 3:
        sum+=num;
        time4++;
        flag4=1;
        break;
      case 4:
        if(num>a5)
          a5=num;
        flag5=1;
        break;
    }
  }
  a4=sum*1.0/time4;
  if(flag1) cout<<a1<<" ";
  else cout<<"N ";
  if(flag2) cout<<a2<<" ";
  else cout<<"N ";
  if(flag3) cout<<a3<<" ";
  else cout<<"N ";
  if(flag4) printf("%.1f ",a4);
  else cout<<"N ";
  if(flag5) cout<<a5;
  else cout<<"N";
  return 0;
}

#include<iostream>
#include<string.h>  //string
#include<algorithm>  //sort
using namespace std;
 
int main()
{
  string str;
  int a[4]={0,0,0,0};
  int A=0,B=0,cha=0;  //非递增排序值 非递减排序值  差值
  cin>>str;
  int len=str.length();
  for(int i=0;i<len;i++){
    a[i]=str[i]-'0';
  }
  if (a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0])  
  {
      cout<<str<<" - "<<str<<" = "<<"0000";       
  }
  else
  {
    while(cha!=6174)
    {
      sort(a,a+4,greater<int>());
        for(int i=0;i<4;i++)
        {
          A=10*A+a[i];
          B=10*B+a[3-i];   //189应该表示为0189
        }
        cha= A-B;
       // cout<<A<<" - "<<B<<" = "<<cha<<endl;   //格式错误,9810-189
        printf("%04d - %04d = %04d\n",A,B,cha);  
        a[3]=cha%10;
        a[2]=(cha/10)%10;
        a[1]=(cha/100)%10;
        a[0]=cha/1000;
        A=0;
        B=0;  
    }
  } 
  return 0;
}
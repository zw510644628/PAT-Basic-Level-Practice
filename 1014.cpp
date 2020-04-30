#include<iostream>
using namespace std;
int main()
{
	string a,b,c,d;
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int flag=0;
	cin>>a>>b>>c>>d;
	int len1=a.length()>b.length()?b.length():a.length();
	for(int i=0;i<len1;i++)
	{//寻找第一个相同的大写字母 ，找A~G 
		if(a[i]==b[i]&&(a[i]>=65&&a[i]<=71)&&flag==0)
		{
		    flag=1;
		    cout<<week[a[i]-65]<<" ";
		    i++;
		}
		//找第二对字符要从第一队相同字母后去寻找，且该字符属于0~9或者A~N之间
		if(flag==1&&a[i]==b[i]) 
		{
			if(a[i]>='0'&&a[i]<='9')
			{
			    cout<<"0"<<a[i]-'0'<<":";
			    break;
			}
			if(a[i]>=65&&a[i]<=78)
			{
				cout<<a[i]-65+10<<":";
				break;
			}
		}
	} 
	int len2=c.length()>d.length()?d.length():c.length(); 
	for(int i=0;i<len2;i++)
	{
		//最后2对字符是2对英文字母
		if(c[i]==d[i]&&((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))) 
		{
			if(i<=9)
			{
				cout<<"0"<<i<<endl;
				break;
			}
			else
			cout<<i<<endl;
			break;
		}
	}
	return 0;
 } 

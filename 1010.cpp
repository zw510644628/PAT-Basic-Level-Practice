#include<iostream>
using namespace std;
int main()
{
	int dishu,zhishu;
	cin>>dishu>>zhishu;
	if(zhishu==0)
	{
		cout<<"0 0";
	}
	else
	cout<<dishu*zhishu<<' '<<zhishu-1;
    while(cin>>dishu>>zhishu)
    {
      if(zhishu!=0)
        cout<<' '<<dishu*zhishu<<' '<<zhishu-1;
    }
    return 0;
} 

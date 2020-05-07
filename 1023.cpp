#include<iostream>
using namespace std;
int a[10];
int main()
{
	for(int i = 0; i < 10; i++)
  {
		cin >> a[i];
	}
	for(int i = 1; i < 10; i++)
  {
		if(a[i])
    {
			cout << i;//输出第一位
			a[i]--;
			break;
		}
	}	
	for(int i = 0; i < 10; i++)
  {
		while(a[i])
    {
			cout << i;
			a[i]--;
		}
	}
	return 0;
}
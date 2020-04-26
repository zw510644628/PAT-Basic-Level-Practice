#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string *str=new string[n];
    for(int i=0;i<n;i++)
    cin>>str[i];
    for(int j=0;j<n;j++)
    {
        string s=str[j];
        size_t p = s.find_first_not_of("A");  //在s中寻找第一个不是A的位置
        if((p == string::npos) || (s[p] != 'P'))  //如果这个位置不存在或者这个位置不是P
        {
            cout<<"NO"<<endl;
            continue;
        }
        size_t t = s.find_first_not_of("A",p+1);//从下一个位置寻找
        if((t == string::npos)||(t == p+1)||(s[t] != 'T')) //如果这个位置不存在或者这个位置跟上一个位置挨着或者这个位置不是T
        {
            cout<<"NO"<<endl;
            continue;
        }
        size_t n = s.find_first_not_of("A",t+1);//继续寻找
        if(n != string::npos)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((s.length()-t-1)==p*(t-p-1))  //T后A的个数=P前A的个数*P和T之前A的个数
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    } 
    system("pause");
    return 0;
}
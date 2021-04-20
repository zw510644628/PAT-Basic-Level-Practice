#include<iostream>
using namespace std;
int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char b[11]={'1','0','X','9','8','7','6','5','4','3','2'};
string s;
bool istrue(){
    int sum=0;
    for(int i=0;i<17;i++){
        if(s[i]<'0' || s[i]>'9')return false;
        sum+=(s[i]-'0')*a[i];
    }
    return b[sum%11]==s[17];
}
int main(){
    int n,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(!istrue()){
            cout<<s<< endl;
            flag=1;
        }
    }
    if(flag == 0)
        cout<<"All passed"<< endl;
    return 0;
}
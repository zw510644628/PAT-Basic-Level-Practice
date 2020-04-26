#include<iostream>
#include<cmath>
using namespace std;
bool prime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int N,sum=0;
    cin>>N;
    for(int i=2;i<=N-2;i++)
    {
        if(prime(i+2)==true && prime(i)==true)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
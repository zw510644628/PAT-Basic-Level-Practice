#include<iostream>
using namespace std;
int main()
{
    double C1,C2;
    cin>>C1>>C2;
    int C=(int) ((C2-C1)/100+0.5);
    int hh=C/3600;
    int mm=C%3600/60;
    int ss=C%60;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
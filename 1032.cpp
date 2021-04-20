#include<iostream>
using namespace std;
# define max 100001
struct sch{
    int id;
    int grade;
};
int main()
{
    int N,a[max],count;
    cin>>N;
    for(int i=0;i<max;i++)
        a[i]= 0;
    sch school[N];
    for(int i=0;i<N;i++)
    {
        cin>>school[i].id;
        cin>>school[i].grade;
        a[school[i].id]+=school[i].grade;
    }
    for(int i=1;i<max;i++)
    {
        if(a[i]>a[0])
        {
            a[0]=a[i];
            count=i;
        }
    }
    cout<<count<<" "<<a[0]<< endl;
    return 0;
}

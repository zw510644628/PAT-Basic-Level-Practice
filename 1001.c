#include<stdio.h>
using namespace std;

int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    if(n>0&&n<=1000)
    {
        while(n!=1){
            if(n%2==0)
            {
                n/=2;
                count++; 
            }
            else{
                n=3*n+1;
                n/=2;
                count++;
            }
        }
    }
    else;
    printf("%d",count);
    return 0;
}
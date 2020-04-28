#include<stdio.h>
using namespace std;
int main()
{
  int T;
  long long int a,b,c;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
  {
    scanf("%lld%lld%lld",&a,&b,&c);
    printf("Case #%d: %s\n", i , a + b > c ? "true" : "false");
  }
  return 0;
}

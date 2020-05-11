#include <stdio.h>
int N;
char ch;
int main()
{
	int i,j,k,ln;
	int sum=1,maxans;
	scanf("%d %c",&N,&ch);
	//求首尾行符号数（最大符号数） 
	for(i=3;;i+=2)
	{
		if(sum+2*i<=N)
			sum+=(2*i);
		else
		{
			maxans=i-2;
			break;
		}
	}
	//打印由符号ch组成的沙漏 
	for(ln=1;ln<=maxans/2+1;ln++)
	{
		for(j=1;j<ln;j++)
			printf(" ");
		for(k=maxans-(ln-1)*2;k>=1;k--)
			printf("%c",ch);
		printf("\n");
	}
	for(ln=maxans/2;ln>=1;ln--)
	{
		for(j=1;j<ln;j++)
			printf(" ");
		for(k=maxans-(ln-1)*2;k>=1;k--)
			printf("%c",ch);
		printf("\n");
	}
	//剩余符号数 
	printf("%d\n",N-sum);
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int a;
	char c;
	cin>>a>>c;
	int column_num = a; //列数
    int row_num = (int)(1.0 * a / 2 + 0.5);   //行数，注意要四舍五入
    for(int i = 0; i < row_num; i++)
    {
        if(i == 0||i == row_num - 1)
        {   //第一行与最后一行的所有列均输出字符
            for(int j = 0; j < column_num; j++)
            {
                printf("%c",c);
            }
        }
        else
        {   //其它行的第一列和最后一列输出字符，其它列输出空格
            for(int j = 0; j < column_num; j++)
            {
                if(j == 0||j == column_num - 1)
                {
                    printf("%c",c);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
	int a;
	char c;
	cin>>a>>c;
	int column_num = a; //����
    int row_num = (int)(1.0 * a / 2 + 0.5);   //������ע��Ҫ��������
    for(int i = 0; i < row_num; i++)
    {
        if(i == 0||i == row_num - 1)
        {   //��һ�������һ�е������о�����ַ�
            for(int j = 0; j < column_num; j++)
            {
                printf("%c",c);
            }
        }
        else
        {   //�����еĵ�һ�к����һ������ַ�������������ո�
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

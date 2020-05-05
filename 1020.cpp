#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
double list[10000000];
struct mooncake {
    double num; //库存
    double tol;     //总价
}cake[1000];
int main() 
{
    int n;
    double D, sum = 0;
    int count = 0;
    cin >> n >> D;//种类 需求
    for (int i = 0; i < n; i++)
        cin >> cake[i].num;
    for (int i = 0; i < n; i++)
        cin >> cake[i].tol;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < cake[i].num; j++) 
            list[count++] = (double)cake[i].tol / cake[i].num;  //存放num个单价（以亿元/万吨为单位）
    sort(list, list + count, greater<double>());  //降序排序 
    for (int i = 0; i < D; i++)                 //累加前D万吨的和就是最大收益
        sum += list[i];
    printf("%0.2lf", sum);
    return 0;
}
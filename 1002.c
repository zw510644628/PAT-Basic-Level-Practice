#include <stdio.h>
int main()
{
    int sum = 0;
    char ch, *s[] = {"ling", "yi", "er", "san", "si",
                          "wu", "liu", "qi", "ba", "jiu"};  //ch作为临时变量保存输入的每一个字符

    while((ch = getchar()) != '\n')                        //如果一直输入字符，不按回车的话
        sum += (ch - '0');

    if(sum / 100)                           /* hundreds */
        printf("%s ", s[sum / 100]);
    if(sum / 10)                            /* tens */
        printf("%s ", s[sum / 10 % 10]);
    printf("%s", s[sum % 10]);        /* units */

    return 0;
}
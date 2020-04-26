#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int weishu[4];
    while (n) {
        weishu[count] = n % 10;
        n = n / 10;
        count++;
    }
    int i;
    for (i = 0; i < weishu[2]; i++)
        printf("B");
    for (i = 0; i < weishu[1]; i++)
        printf("S");
    for (i = 0; i < weishu[0]; i++)
        printf("%i", i + 1);

    return 0;
}
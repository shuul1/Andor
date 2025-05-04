#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);

    if (a > b && a > c)
        printf("最大的值是%d\n", a);

    if (b > a && b > c)
        printf("最大的值是%d\n", b);

    if (c > a && c > b)
        printf("最大的值是%d\n", c);
        /*
        && 表示 并且
        || 表示 或者
        */
}

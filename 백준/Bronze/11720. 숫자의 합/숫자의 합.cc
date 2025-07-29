#include <stdio.h>

int main(void)
{
    int n, i, sum;
    char ary[100] = { 0 };
    sum = 0;

    scanf("%d", &n);
    scanf("%s", ary);

    for (i = 0; i<n; i++)
    {
        sum += ary[i]-'0';
    }

    printf("%d", sum);
    

    return 0;

}
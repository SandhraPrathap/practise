#include <stdio.h>
int pro(int n)
{
    int r, prod = 1;
    if (n == 0)
        return 1;

    r = n % 10;
    prod = r * pro(n / 10);
    return prod;
}
int sum(int n)
{
    int r, s = 0;
    if (n == 0)
        return 0;
    else
    {
        r = n % 10;
        s = r + sum(n / 10);
        return s;
    }
}
void main()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d", &n);
    printf("Ratio:%d/%d\n", pro(n), sum(n));
}
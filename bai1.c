#include <stdio.h>

void main()
{
    int n,k; scanf("%d %d", &n, &k);
    unsigned long long res = 1;
    int i = 1, j = n;
    while (i < n-k+1 && j > k)
    {
        res = res*j/i;
        i++;
        j--;
    }
    printf("%d", res);
}
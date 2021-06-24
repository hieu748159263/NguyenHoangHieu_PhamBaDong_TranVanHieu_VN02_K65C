#include <stdio.h>

int main()
{
    FILE *inp = fopen("TOHOP.INP", "r");
    if (inp == NULL)
    {
        printf("File khong ton tai!");
        return 0;
    }
    FILE *out = fopen("TOHOP.OUT", "w");
    int n,k;
    while (fscanf(inp,"%d %d ", &n, &k) != EOF)
    {
        unsigned long long res = 1;
        int i = 1, j = n;
        while (i < n-k+1 && j > k)
        {
            res = res*j/i;
            i++;
            j--;
        }
        fprintf(out,"%d\n", res);
    }
    fclose(inp); fclose(out);
}
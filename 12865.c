#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    int k = 0;

    scanf("%d %d", &n, &k);

    int *weights = (int *)malloc((sizeof(int) * n));
    int *values = (int *)malloc((sizeof(int) * n));
    int **tables;

    tables = (int **)malloc((sizeof(int *) * n));
    for (int i = 0; i < n; i++)
    {
        tables[i] = (int *)malloc(sizeof(int) * (k + 1));
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &weights[i], &values[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (weights[i] <= j)
            {
                if (i == 0)
                {
                    tables[i][j] = values[i];
                }
                else
                {
                    if (tables[i - 1][j] < tables[i - 1][j - weights[i]] + values[i])
                    {
                        tables[i][j] = tables[i - 1][j - weights[i]] + values[i];
                    }
                    else
                    {
                        tables[i][j] = tables[i - 1][j];
                    }
                }
            }
            else
            {
                if (i == 0)
                {
                    tables[i][j] = 0;
                }
                else
                {
                    tables[i][j] = tables[i - 1][j];
                }
            }
            // printf("%2d ", tables[i][j]);
        }
        // printf("\n");
    }

    printf("%d\n", tables[n-1][k]);

    // for (int i = 0; i < n; i++)
    // {
    //     free(tables[k]);
    // }
    // free(tables);
}
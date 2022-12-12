#include <stdio.h>
void main()
{
    int ar[10][10], n, m, j, i, sum = 0, k = 0, t = 0, s = 0;
    printf("enter the rows and columns of matrix\n");
    scanf("%d%d", &n, &m);
    printf("enter the elements of matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("matrix are given below\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    // sum of diagonals
    if (n != m)
    {
        printf("sum of diagonal not possible because this is not square matrix\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if ((i == j) && (n == m))
                {
                    sum = sum + ar[i][j];
                }
            }
        }
        printf("sum of diagonals is %d\n", sum);
    }

        // sum of rows
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            k = k + ar[i][j];
        }
        printf("sum of row %d is %d\n ", i + 1, k);
        k = k - k;
    }
    // sum of columns
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            s = s + ar[i][j];
        }
        printf("sum of columns %d is %d\n", j + 1, s);
        s = s - s;
    }
}
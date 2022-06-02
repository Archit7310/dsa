// using gauss elimination method solve the system of linear equations
// x+y+z=10
// 2x+y+2z=17
// 3x+2y+z=12

// c programme to prin MxN matrix
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int i, j, n, m;
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter the elements of matrix\n");
    for (i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
}
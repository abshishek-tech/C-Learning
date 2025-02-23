#include <stdio.h>
int R, C;

// Function to convert mat to its transpose
void transpose(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = i + 1; j < C; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

// Driver code
int main()
{
    int mat[R][C];
     printf("Input Matrix: \n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    transpose(mat);

    printf("Modified matrix is:\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

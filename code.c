#include <stdio.h>

#define N 4

int maze[N][N], sol[N][N];

int solve(int i, int j)
{
    if(i == N-1 && j == N-1)
    {
        sol[i][j] = 1;
        return 1;
    }

    if(i >= 0 && j >= 0 && i < N && j < N && maze[i][j] == 1)
    {
        sol[i][j] = 1;

        if(solve(i+1, j))
            return 1;

        if(solve(i, j+1))
            return 1;

        sol[i][j] = 0;
        return 0;
    }

    return 0;
}

int main()
{
    int i, j;

    printf("Enter Maze Values (1 = Path, 0 = Block):\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &maze[i][j]);
        }
    }

    if(solve(0, 0))
    {
        printf("\nPath Found:\n");

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
                printf("%d ", sol[i][j]);

            printf("\n");
        }
    }
    else
    {
        printf("No Path Found");
    }

    return 0;
}
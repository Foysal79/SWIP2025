#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y, int r, int c, vector<vector<bool>> &isVisited, vector<vector<int>> &grid)
{
    isVisited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < r && ny < c && grid[nx][ny] == 1 && !isVisited[nx][ny])
        {
            dfs(nx, ny, r, c, isVisited, grid);
        }
    }
}
int main()
{
    vector<vector<int>> grid = {
        {1, 1, 0, 1}, 
        {0, 1, 0, 1}, 
        {1, 1, 1, 0}, 
        {1, 1, 0, 1}};
    int r = grid.size();
    int c = grid[0].size();
    vector<vector<bool>> isVisited(r, vector<bool>(c, 0));

    dfs(0, 0, r, c, isVisited, grid);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << isVisited[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
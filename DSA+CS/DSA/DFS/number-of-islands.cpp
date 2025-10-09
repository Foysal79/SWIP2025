// https://leetcode.com/problems/flood-fill/description
// Graph Traves theory
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 
    void dfs(int x, int y, int c, int r, vector<vector<char>> &grid)
    {
       grid[x][y] = '#';
       
       int dx[] = {1, -1, 0, 0};
       int dy[] = {0, 0, 1, -1};

       for(int i = 0; i < 4; i++)
       {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < c && ny < r && grid[nx][ny] == '1')
        {
            dfs(nx, ny, c, r, grid);
        }
       }
    }

    int numIslands(vector<vector<char>>& grid) {
        
        int c = grid.size();
        int r = grid[0].size();
        int ans = 0;
        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < r; j++)
            {
                if(grid[i][j] == '1')
                {
                  ans += 1;
                  dfs(i, j, c, r, grid);
                }
            
            }
        }


        return ans;


    }
};

/*

| Complexity Type      | Value      | Explanation                     |
| -------------------- | ---------- | ------------------------------- |
|   Time Complexity    | O(m × n)   | প্রতিটি cell একবারই traverse হয়  |
|   Space Complexity   | O(m × n)   | recursion stack (worst case)    |

*/
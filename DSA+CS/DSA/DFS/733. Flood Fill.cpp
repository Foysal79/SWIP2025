// https://leetcode.com/problems/flood-fill
// graph traves theory

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     
     

     void dfs( int x, int y, int n, int m, int color, vector<vector<int>>& image)
     {
        int prevcolor = image[x][y];
        image[x][y] = color;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

         for(int i = 0; i < 4; i++)
         {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && nx < n && ny < m && image[nx][ny] == prevcolor && image[nx][ny] != color)
            {
                dfs(nx, ny, n, m, color, image);
            }
         }

     }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        dfs(sr, sc, n, m, color , image);
        return image;
    }
};
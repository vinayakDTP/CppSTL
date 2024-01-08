#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {

    int initialColor = image[sr][sc];
    if(initialColor != newcolor)
    {
        dfs(sr,sc, initialColor, newcolor, image);
    }
    return image;

}

void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>>& image)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0) return;
    if (i >= n || j >= m) return;
    if (image[i][j]!= initialColor) return;


    image[i][j] = newColor;


    dfs(i-1,j,initialColor, newColor, image);
    dfs(i+1,j,initialColor, newColor, image);
    dfs(i,j-1, initialColor, newColor, image);
    dfs(i,j+1,initialColor, newColor, image);

}

int main()
{
    vector<vector<int>> image;

}





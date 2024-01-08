#include <bits/stdc++.h>
using namespace std;

const int N= 1e3+10;
vector<int> graph[N];
int depth[N],height[N];


void dfs(int vertex, int par=0){
// take action on vertex after entering the vertex
for(int child : graph[vertex]){
// take action on child before entering the child node
   if (child == par) continue;
   depth[child] = depth[vertex] + 1;
   dfs(child,vertex);
   height[vertex] = max(height[vertex], height[child] + 1);
// take action on child after exiting the child node
}
// take action on vertex before exiting the vertex 
}

int main()
{
    int n;
    cin >> n;
    for(int i =0; i < n; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    for (int i =0; i<n; ++i){
        cout << depth[i] << " " << height[i] << endl;
    }
    
}


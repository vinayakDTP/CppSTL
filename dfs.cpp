
#include <bits/stdc++.h>
using namespace std;


// dfs_search
 
const int N= 1e3+10;

vector<int> graph[N];
bool vis[N];

void dfs(int vertex){

// take action on vertex after entering the vertex

 vis[vertex] = 1;

for(int child : graph[vertex]){

// take action on child before entering the child node

   if (vis[child]) continue;

   dfs(child);

// take action on child after exiting the child node

}

// take action on vertex before exiting the vertex 

}

 

int main(){
     
     int n, m;
     cin >> n >> m;

     for(int i = 0; i < m; ++i){

        int v1, v2;
        cin >> v1, v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

     }

}
 
 
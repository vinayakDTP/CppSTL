

// Hackerrank que - no of connected components //


#include <bits/stdc++.h>
using namespace std;


// dfs_search
 
const int N= 1e3+10;

vector<int> graph[N];
bool vis[N];

// vector <vector<int>> cc;
//vector<int> current_cc;

int dfs(int vertex){
// take action on vertex before entering the vertex

 vis[vertex] = true;
//  current_cc.push_back(vertex);

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

     int ct = 0;
     for(int i=0; i < n; ++i){

        if (vis[i]) continue;
        // current_cc.clear();
        dfs(i);
        // cc.push_back(current_cc);
        ct++;
     }

     cout << ct << endl; // ct is the number of coonected components
     
   //   cout << cc.size() << endl;
   //   for(auto c_cc : cc){
   //    for(int vertex : c_cc){
   //       cout << vertex << endl;
   //    }
   //    cout << endl;
   //   }
}
 
 
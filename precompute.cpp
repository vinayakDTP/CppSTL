#include <bits/stdc++.h>
using namespace std;

/** Operations on subtree including
 * sum of it and counting the even nodes in 
 * a subree using precomputation**/

const int N= 1e3+10;
vector<int> graph[N];
int subtree_sum[N];
int val[N];
int even_ct[N];


void dfs(int vertex, int par=0){
// take action on vertex after entering the vertex
for(int child : graph[vertex]){
// take action on child before entering the child node
   if (child == par) continue;
   dfs(child,vertex);
   subtree_sum[vertex] += subtree_sum[child];
   even_ct[vertex] += even_ct[child];
// take action on child after exiting the child node
}
subtree_sum[vertex] += val[vertex]; // OR += vertex simmply
if(!(vertex & 1)) even_ct[vertex]++;
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
    int q;
    cin >> q;
    while(q--){
        int v;
        cin >> v;
        cout << subtree_sum[v] << " " << even_ct[v] << endl;
    }
   
    
}

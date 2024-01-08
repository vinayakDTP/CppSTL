#include <bits/stdc++.h>
using namespace std;


const int N= 1e3+10;
const int M = 1e9 + 7;
vector<int> graph[N];
int subtree_sum[N];
int val[N];



void dfs(int vertex, int par=0){
// take action on vertex after entering the vertex
for(int child : graph[vertex]){
// take action on child before entering the child node
   if (child == par) continue;
   dfs(child,vertex);
   subtree_sum[vertex] += subtree_sum[child];
// take action on child after exiting the child node
}
subtree_sum[vertex] += val[vertex]; // OR += vertex simmply
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
    dfs(1,0);
    long long ans =0;
    for(int i=2;i<=n;++i){
        int part_1 = subtree_sum[i];
        int part_2 = subtree_sum[1] - part_1;
        ans = max(ans,(part_1*1LL * part_2)%M);
    }
    cout << ans;

}
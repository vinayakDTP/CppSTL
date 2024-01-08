#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
vector<int>graph[N];
int depth[N];

void dfs(int vertex, int par=-1){
    for(auto child:graph[vertex]){
        if(child==par) continue;
        depth[child] = depth[vertex]+1;
        dfs(child,vertex);
    }

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

    int max_depth = -1;
    int max_d_node;
    for(int i=0;i<n;++i){
        if(max_depth < depth[i]){
            max_depth = depth[i];
            max_d_node = i;
        }
        depth[i]=0;
    }

    dfs(max_d_node);
    auto max = *max_element(depth,depth+n);

    cout << max << endl;




}
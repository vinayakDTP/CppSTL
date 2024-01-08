#include <bits/stdc++.h>
using namespace std;

// finding LCA in a generic tree in O(n)

const int N = 1e5+10;
vector<int>graph[N];
int p[N];

void dfs(int vertex, int par=-1){
    p[vertex] = par;
    for(auto child:graph[vertex]){
        if(child==par) continue;
        dfs(child,vertex);
    }
}

vector<int> path(int v)
{
    vector<int> ans;
    while(v!=-1){
        ans.push_back(v);
        v = p[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
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

    int x,y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);

    int min_l = min(path_x.size(),path_y.size());
    int lca = -1;
    for(int i=0;i<min_l;++i){
        if(path_x[i]==path_y[i]){
            lca = path_x[i];
        }
        else{
            break;
        }
    }
    cout << lca << endl;
}
   
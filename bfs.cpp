#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
vector<int>graph[N];
int vis[N];
int level[N]; // computes level of each node

void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=1;

    while(!q.empty()){
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        for(int child:graph[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
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
}
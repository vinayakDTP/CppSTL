#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<int>graph[N];
bool vis[N];

void dfs(int vertex){
//
    for(int child:g[vertex]){
        //
        dfs(child);
        //
    }
    //
}

int main(){
    
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;++i){

        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].pushback(v2);
        graph[v2].pushback(v1);

    }

    


   


}
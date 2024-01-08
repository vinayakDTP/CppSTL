#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int parent[N];
int nodesize[N];

void make(int v){
    parent[v] = v;
    nodesize[v] = 1;
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]); // Path compression
}

void Union(int a, int b){
    a = find(a);
    b= find(b);
    if(a != b){
        if(nodesize[a] < nodesize[b]){
            swap(a,b);        }
        parent[b] = a; // Union by size optimization
        nodesize[a] += nodesize[b];
    }

    }


    int main(){

        int n,k;
        cin >> n >> k;
        for(int i =1; i<=n; ++i){
            make(i);
        }
        



    }
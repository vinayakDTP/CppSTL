#include <bits/stdc++.h>
using namespace std;

void printMap(map<int,int,greater<int>>m){
    for(auto &pr:m){
        cout << pr.first << ' ' << pr.second << endl;
    }
}

int main(){

    map<int,int,greater<int>>m;
    vector<int> a,b;

    int t;
    cin >> t;
    while(t--){
        int n,s1,s2;
        cin >> n >> s1 >> s2;
        for(int i=0;i<n;++i){
        int freq;
        cin >> freq ;
        m.insert({freq,i+1});
        }
        // printMap(m);
        // cout << endl;
        // cout << s1 << s2 << endl;
        int index=0;
        while(index < n){
            bool first = (a.size()+1)*s1 <= (b.size()+1)*s2;
            if(first){
                a.push_back(m[index++]);}
            else{
                b.push_back(m[index++]);
            }
        }

        cout << a.size() << ' ';
        for(auto &val:a){
            cout << val << ' ';
        }
        cout << endl;

        cout << b.size() << ' ';
        for(auto &val:b){
            cout << val << ' ';
        }
        cout << endl;
    }

    }

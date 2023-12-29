#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<long long>beauty;
    for(int i=0; i<n; ++i){
        int val;
        cin >> val;
        beauty.push_back(val);
    }
    sort(beauty.begin()+l,beauty.begin()+r+1);
    reverse(beauty.begin()+l,beauty.begin()+r+1);
    auto sum = accumulate(beauty.begin()+l,beauty.begin()+l+3,l-r);
    cout << sum << endl;
    }

#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];
    vector<int> v(n);

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    sort(a,a+n);
    sort(v.begin(), v.end());

     for(int i=0; i<n; ++i){
        cout  << a[i] << " ";
    }

    cout << endl;
}
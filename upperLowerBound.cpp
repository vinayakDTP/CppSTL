#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    set<int> s;

    for(int i=0; i< n; ++i){
        int x;                 // input for sets
        cin >> x;
        s.insert(x);
    }

    for(int i=0; i<n; ++i){
        cin >> a[i];            // input for vectors
    }

    sort(a.begin(), a.end(), 5);
    for(int i=0; i<n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;

    auto it = upper_bound(a.begin(), a.end(), 5); //play around with lower_bound
    if(it == a.end()) {
        cout << "Not found";}
    cout << (*it) << endl;

    auto it = s.upper_bound(5); // complexity is log(n) instead of O(n)
}


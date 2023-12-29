#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {2,3,5,6,7};
    vector<pair<int, int> > v_p = {{1,2}, {3,4}};

    for (auto it= v.begin();it != v.end(); it++){

        cout << (*it) << " ";
    }
    cout << endl;

    // for(int i=0; i<v.size(); ++i){

    //     cout << v[i] << " ";

    // }
    // cout << endl;

    for (auto &value : v){

        cout << value << endl;
    }

    for (auto &value : v_p){

        cout << value.first << " ," << value.second << endl;
    }



    cout << endl;
}
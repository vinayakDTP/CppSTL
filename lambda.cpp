#include <bits/stdc++.h>
using namespace std;

int main(){

    auto sum = [](int x, int y){return x + y;};
    cout << sum(2,3) << endl;

    vector <int> v = {2,3,5};

    cout << all_of(v.begin(), v.end(), [](int x){return x>0;});

    cout << any_of(v.begin(), v.end(), [](int x){return x>0;});

    cout << none_of(v.begin(), v.end(), [](int x){return x>0;});

}
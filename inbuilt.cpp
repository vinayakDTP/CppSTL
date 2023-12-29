#include <bits/stdc++.h>
using namespace std;


int main(){

int n;
cin >> n;
    
vector<int> v(n);

for(int i=0; i<n; ++i){

    cin >> v[i];
}

int min = *min_element(v.begin(), v.end());
cout << min <<endl;
int max = *max_element(v.begin(), v.end());
cout << max <<endl;

int sum = accumulate(v.begin(), v.end(), 0); // third arg is initial value of sum
cout << sum <<endl;

int ct = count(v.begin(), v.end(), 6);
cout << ct << endl;

auto it = find(v.begin(), v.end(), 6);
if(it!=v.end()){
    cout << *it << endl;
}
else{
    cout << "Element not found";
    }

reverse(v.begin(),v.end()); // also works for strings and arrays
for(auto val:v){
    cout << val << " ";
}
cout << endl;


}

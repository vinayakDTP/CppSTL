#include <bits/stdc++.h>
using namespace std;


/*normal maps store keys in ascending or lexographical order and they're unique
 while in python set and dict are unique but they're not in any order analogous to unordered maps in stl
 
 entering and accesing values in maps both are an logn operation

 find() and erase() are also logn operations and they return an iterator(REMEMBER)
 */



void printMap(map<string,string> &m){

    cout << m.size()<< endl;

    for(auto &pr : m){
        cout << pr.first <<  " " << pr.second << endl;
    }
}

int main(){

    map<int,string> m;
    m[1] = "abs";
    m.insert({4,"afg"});

    map<string,string> m1;
    m1["abde"] = "abs"; // time complexity is s.size() * log(n) 
    

    // for(auto it=m.begin(); it!=m.end();it++){
    //     cout << it->first << " " << it->second << endl;

    // }
    //printMap(m);
    printMap(m1);





    

}








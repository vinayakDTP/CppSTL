#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n,k;

       cin >> n >> k;
       multiset<long long> bags; // stores in an ascending order

       for (int i=0; i<n; ++i){
            long long candy_ct;
            cin >> candy_ct;

            bags.insert(candy_ct);
       }

       
      // took input upto this line

       long long total_candies;
       for(int i =0; i < k; i++){

        auto last_it = (--bags.end());
        auto candy_eat = (*last_it);

        total_candies+= candy_eat;

        bags.erase(last_it); // be aware of not erasing bags with same number of candies as the last one
        bags.insert(candy_eat/2);

       }

       cout << total_candies << endl;
    }

}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int xi;
    vector<int> vec_prices;
    while (n>0) {
        cin>>xi;
        vec_prices.push_back(xi);
        n--;
    }
    sort(vec_prices.begin(),vec_prices.end());
    int q_days;
    cin>>q_days;
    long long int mi;
    
    while(q_days>0) {
        cin>>mi;
        
        if (vec_prices.back()<mi) {
            cout<<vec_prices.size()<<'\n';
        }
        else {
            auto upper = std::upper_bound(vec_prices.begin(), vec_prices.end(), mi);
            cout<<std::distance(vec_prices.begin(), upper)<<'\n';
        }
        q_days--;
    }
    
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum_worms=0;
    vector<int> vec_piles;
    int new_pile;
    for(int i=0;i<n;i++) {
        cin>>new_pile;
        sum_worms+=new_pile;
        vec_piles.push_back(sum_worms);
    }
    
    int m;
    cin>>m;
    int juicy_label;
    for(int i=0;i<m;i++) {
        cin>>juicy_label;
        auto upper = std::upper_bound(vec_piles.begin(), vec_piles.end(), (juicy_label-1));
        cout<<(std::distance(vec_piles.begin(), upper))+1<<'\n';
    }
    
    return 0;
}

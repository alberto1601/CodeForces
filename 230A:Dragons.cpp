/*
Description:
Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons that live on this level.
Kirito and the dragons have strength, which is represented by an integer. In the duel between two opponents the duel's outcome is determined by
their strength. Initially, Kirito's strength equals s.

If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, then Kirito loses
the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase
by yi.
Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a
single loss.
 
Input
The first line contains two space-separated integers s and n (1 ≤ s ≤ 10^4, 1 ≤ n ≤ 10^3). Then n lines follow: the i-th line contains
space-separated integers xi and yi (1 ≤ xi ≤ 104, 0 ≤ yi ≤ 104) — the i-th dragon's strength and the bonus for defeating it.
*/
 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int s,n;
    cin>>s>>n;
    
    vector<pair<int, int>> xs_yb;
    
    while(n>0) {
        int xi,yi;
        cin>>xi>>yi;
        xs_yb.push_back(make_pair(xi, yi));
        n--;
    }
    
    sort(xs_yb.begin(), xs_yb.end());
    for(int index=0;index<xs_yb.size();index++) {
        if (s>xs_yb[index].first) {
            s+=xs_yb[index].second;
        }
        else {
            cout<<"NO"<<'\n';
            return 0;
        }
    }
    
    cout<<"YES"<<'\n';

    return 0;
}



#include <iostream>
#include <map>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    while(tests>0) {
        int n;
        cin>>n;
        map<int,int> couple;
        long long int count_pairs=0;
        int a_i;
        for (int i=1;i<=n;i++) {
            cin>>a_i;
            int sub=a_i-i;
            auto search = couple.find(sub);
            if (search != couple.end()) {
                couple[sub] = couple[sub]+1;
            }
            else {
                    couple.insert({sub,1});
            }
        }
        for (const auto& coup: couple) {
            if (coup.second>2) {
                long long int addict = (coup.second*(coup.second-1))/2;
                count_pairs = count_pairs + addict;
            }
            else if (coup.second==2) {
                count_pairs = count_pairs + 1;
            }
        }
        cout <<count_pairs<<'\n';
        tests--;
    }
    return 0;
}

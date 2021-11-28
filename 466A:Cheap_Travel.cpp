#include <iostream>
using namespace std;

int main() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int total_cost=0;
    int rides_done=0;
    while (rides_done<n) {
        if (a<=(b/m)) {
            total_cost= a*n;
            break;
        }
        else if ((a>(b/m)) && ((n-rides_done)*a>b)) {
            total_cost+=b;
            rides_done+=m;
        }
        else {
            total_cost+=(n-rides_done)*a;
            break;
        }
    }
    cout<<total_cost<<'\n';
    return 0;
}

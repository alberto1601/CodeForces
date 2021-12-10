#include <iostream>
using namespace std;

int main() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if (x1==x2) {
        if(y2>y1) {
            int dist = y2-y1;
            int x3=x1+dist;
            cout<<x3<<" "<<y1<<" "<<x3<<" "<<y2<<'\n';
        }
        else {
            int dist = y1-y2;
            int x3=x1+dist;
            cout<<x3<<" "<<y2<<" "<<x3<<" "<<y1<<'\n';
        }
    }
    else if (y1==y2) {
        if (x2>x1) {
            int dist = x2-x1;
            int y3=y1+dist;
            cout<<x1<<" "<<y3<<" "<<x2<<" "<<y3<<'\n';
        }
        else {
            int dist = x1-x2;
            int y3=y1+dist;
            cout<<x2<<" "<<y3<<" "<<x1<<" "<<y3<<'\n';
        }
    }
    else {
        if (abs(x1-x2)!=abs(y1-y2)) {
            int ans=-1;
            cout<<ans<<'\n';
        }
        else {
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<'\n';
        }
    }
    return 0;
}

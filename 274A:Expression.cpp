#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;
    int max= a+b+c;
    int result = 0;
    
    for (int i=0;i<5;i++) {
        switch (i) {
            case 0:
                result = (a*b)+c;
                break;
            case 1:
                result = (a+b)*c;
                break;
            case 2:
                result = a*(b+c);
                break;
            case 3:
                result = a+(b*c);
                break;
            case 4:
                result = a*b*c;
                break;
        }
        if (result > max) {
            max = result;
        }
    }
    cout<<max<<'\n';
    return 0;
}

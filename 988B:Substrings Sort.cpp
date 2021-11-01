#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    vector<std::string> v_strings;
    string s_input;
    if (n>0) {
        while(n>0) {
            cin>>s_input;
            v_strings.push_back(s_input);
            n--;
        }
        
        std::sort(v_strings.begin(),v_strings.end(),[](const std::string& first,const std::string& second) {return first.size()<second.size();});
        
        for (int i=0; i<(v_strings.size() -1);i++) {
            if((v_strings.at(i+1)).rfind(v_strings.at(i)) != string::npos) {
                continue;
            }
            else {
                cout<<"NO"<<'\n';
                return 0;
            }
        }
    }
    
    cout<<"YES"<<'\n';
    for(auto& element: v_strings) {
        cout<<element<<'\n';
    }
    
    return 0;
}

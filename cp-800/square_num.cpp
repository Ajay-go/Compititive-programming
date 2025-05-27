#include <bits/stdc++.h>
#include <string>
#include <cmath> // for sqrt, floor
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
      int n,k;
      cin>>n>>k;
        string s;
        cin >> s;

        unordered_map<char,int>mp;

        for(auto ch:s){
         mp[ch]++;
        }
        bool flag = 0;
        for(auto ele:mp){
         if(ele.second >= 2*k){
            flag = 1;
         }
         
        }
        if(flag )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      
    }
    return 0;
}

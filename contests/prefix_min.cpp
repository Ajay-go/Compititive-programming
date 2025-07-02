#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>v(n);
        int mx = -1e9;
        int mn = 1e9;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            mx = max(mx,v[i]);
            mn = min(mn,v[i]);
        }
        string ans = "";
        bool maxi = false;
        bool mini = false;
        for(int ele:v){
            if((!maxi && !mini )|| (maxi && mini))ans += '1';
            else ans += '0';
            if(ele == mx)maxi = true;

            if(ele == mn)mini = true;
            
        }
        for(int i = 0;i<n;i++){
            if(v[i] == mx || v[i] == mn)ans[i] = '1';
        }
        cout<<ans<<endl;
    }
    return 0;
}
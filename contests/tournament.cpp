#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int ele = v[j-1];
        sort(v.begin(),v.end(),greater<int>());
        if(k == 1 && ele != v[0])cout<<"No"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm> // for __gcd
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)cin >> a[i];
        bool flag = 0;
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(__gcd(a[i],a[j]) <= 2){
                    flag = 1;
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}

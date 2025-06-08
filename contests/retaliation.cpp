#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = 1e9;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mn = min(mn, v[i]);
        }

        if(n < 2){
            cout << "YES" << endl;
            continue;
        }

        int gap = v[1] - v[0];
        bool flag = true;
        for(int i = 2; i < n; i++){
            if(v[i] - v[i-1] != gap){
                flag = false;
                break;
            }
        }

        if(flag && abs(gap) <= mn){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

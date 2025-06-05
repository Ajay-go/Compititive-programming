#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        int ans = 0;
        for(int i = n - 2; i >= 0; i--){
            while(v[i] >= v[i+1]){
                v[i] /= 2;
                ans++;
                if(v[i] == 0) break;
            }
        }

        // Final check
        bool isIncreasing = true;
        for(int i = 1; i < n; i++){
            if(v[i] <= v[i-1]){
                isIncreasing = false;
                break;
            }
        }

        if(!isIncreasing) ans = -1;

        cout << ans << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = INT_MIN, mn = INT_MAX;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }

        if (mx == mn) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            sort(v.begin(), v.end());
            cout << mx << " ";
            for (int i = 0; i < n - 1; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

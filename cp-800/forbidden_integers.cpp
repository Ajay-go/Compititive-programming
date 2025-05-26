#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> ans;

        if (k == 1 && x == 1) {
            cout << "NO" << endl;
        }
        else if (x != 1) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                ans.push_back(1);
            }
        }
        else {
            if (n % 2 == 0 && k >= 2 && x != 2 ) {
                cout << "YES" << endl;
                for (int i = 0; i < n / 2; i++) {
                    ans.push_back(2);
                }
            }
            else if (n % 2 != 0 && k >= 3 && x != 3) {
                cout << "YES" << endl;
                ans.push_back(3);
                n -= 3;
                for (int i = 0; i < n / 2; i++) {
                    ans.push_back(2);
                }
            }
            else {
                cout << "NO" << endl;
            }
        }

        if (!ans.empty()) {
            cout << ans.size() << endl;
            for (int num : ans) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

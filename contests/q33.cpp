#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int mx = -1e9;
        vector<vector<int>> v(n, vector<int>(m));
        vector<int> rows(n), cols(m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
                mx = max(mx, v[i][j]);
            }
        }

        int tcnt = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (v[i][j] == mx) {
                    cnt++;
                    tcnt++;
                }
            }
            rows[i] = cnt;
        }

        int smax = -1e9;
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (v[i][j] == mx) cnt++;
                if (v[i][j] < mx) smax = max(smax, v[i][j]);
            }
            cols[j] = cnt;
        }

        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < m; j++) {
                int curr = rows[i] + cols[j];
                if (v[i][j] == mx) curr--;
                if (tcnt - curr == 0) {
                    int res = max(smax, mx - 1);
                    if (res == 1e9) res = 0;
                    cout << res << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            int res = mx;
            if (res == 1e9) res = 0;
            cout << res << endl;
        }
    }

    return 0;
}

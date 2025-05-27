#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }

        if((cnt0 <= 0 || cnt1 <= 0) && 2*k < n ){
         cout << "NO\n";
         continue;
        }
        int free = n / 2 - k;
        cnt0 -= free;
        cnt1 -= free;
        if (cnt0 >= 2 * k || cnt1 >= 2 * k || (cnt0 / 2 + cnt1 / 2 == k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

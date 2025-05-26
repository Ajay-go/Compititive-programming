#include <iostream>
#include <vector>
#include <algorithm> // for __gcd
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool is_beautiful_possible(const vector<int>& a) {
    int g = a[0];
    for (int i = 1; i < a.size(); ++i) {
        g = gcd(g, a[i]);
    }
    return g == 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        if (is_beautiful_possible(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

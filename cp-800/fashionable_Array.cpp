#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> mn = arr;
        vector<int> mx = arr;

        sort(mn.begin(), mn.end()); // ascending
        sort(mx.begin(), mx.end(), greater<int>()); // descending

        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            if ((mn[0] + mx[i]) % 2 == 0 || (mx[0] + mn[i])%2 == 0)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

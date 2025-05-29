#include <bits/stdc++.h>
using namespace std;
//cccccc
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;

        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            long long ele;
            cin >> ele;
            sum += min(ele, a - 1);
        }

        cout << sum+b << endl;
    }
}

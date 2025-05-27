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

        for (int i = 0; i < n; i++)cin >> arr[i];

        int cnt = 1;
         int prev = arr[0];
        for(int i = 1;i<n;i++){
            int curr = arr[i];
            if(curr > prev+1){
               cnt++;
               prev = curr;
               
            }
            
            
        }
        cout<<cnt<<endl;

        
    }

    return 0;
}

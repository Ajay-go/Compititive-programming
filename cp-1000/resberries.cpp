#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int cnt1 = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if (v[i] == 1)
                cnt1++;
        }

        if(k == 2){
            bool flag = false;
            for(int ele:v){
                if(ele%2 == 0){
                    cout<<0;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                cout<<1;
                
            }
        }
        else if(k == 3){
            bool flag = false;
            int res = 2;
            for (int ele : v)
            {
                if (ele % 3 == 0)
                {
                    cout << 0;
                    flag = true;
                    break;
                }
                res = min(res, 3 - ele % 3);
            }
            if (!flag)
                cout << res;
        }
        else if(k == 4){
            int res = 3;
            bool flag = false;
            for (int ele : v)
            {
                if (ele % 4 == 0)
                {
                    cout << 0;
                    flag = true;
                    break;
                }
                res = min(res, 4 - ele % 4);
                
            }
            if (cnt1 >= 2)
            {
                res = min(res, 2);
            }
            if (!flag)
                cout << res;
        }
        else{
            int res = 4;
            bool flag = false;
            for(int ele:v){
                if(ele % 5 == 0 ){
                    cout<<0;
                    flag = true;
                    break;
                    
                }
                res = min(res, 5 - ele % 5);
            }
            if(!flag)cout<<res;
            

        }
        cout<<endl;
    }
    return 0;
}
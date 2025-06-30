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

        if(k == 2){
            if(n%2 == 0)cout<<0;
            else cout<<1;
        }
        else if(k == 3){
            if(n%3 == 0)cout<<0;
            else if(n%3 == 1)cout<<2;
            else cout<<1;
        }
        else if(k == 4){
            if (n % 4 == 0)
                cout << 0;
            else if (n % 4 == 1)
                cout << 3;
            else if (n % 4 == 2)
                cout << 2;
            else cout<<3;
        }
        else{
            if (n % 5 == 0)
                cout << 0;
            else if (n % 5 == 1)
                cout << 4;
            else if (n % 5 == 2)
                cout << 3;
            else if (n % 5 == 3)
                cout << 2;
            else
                cout << 1;
        }
        cout<<endl;
    }
    return 0;
}
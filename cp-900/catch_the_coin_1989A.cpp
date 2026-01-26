#include<iostream>
using namespace std;
int check(int x,int y){
    // int moves_need = abs(x);
    // int change = moves_need -1;
    // y -= change;
    // return abs(y) <= moves_need;

    if( y < -1 )return 0;
    return 1;
}
int main (){
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;

        if(check(x,y))cout<<"yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
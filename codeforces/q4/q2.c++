#include <bits/stdc++.h>
using namespace std;

int main(){

    int t=0;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(2));
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        vector<int>st(n);
        for(int i=0;i<n;i++){
            st[i] = a[i][0];
        }
        int c = 0;
        int curr = 0;
        for(int i=0;i<=m;i++){
            if(i+1!=st[i]){
                if(curr == 0){
                    curr++;
                    c++;
                }else if(curr == 1){
                    curr--;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int changes = 0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]) changes++;
        }        
        unordered_set<int>st(arr.begin(),arr.end());
        cout<<changes+st.size()<<endl;
    }




    return 0;
}
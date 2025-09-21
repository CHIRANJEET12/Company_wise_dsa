#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int minn = arr[0];
        int ans = 0;
        for(int i=1;i<n;i++){
            ans += max(minn,arr[i]);
            int m = min(minn,arr[i]);
            minn = minn - m;
            arr[i] = arr[i] - m;
        }
        cout<<ans;
        t--;
    }


    return 0;
}
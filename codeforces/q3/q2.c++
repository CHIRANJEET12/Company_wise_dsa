#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }

        int maxFreq = 0;
        for (auto &it : mpp) maxFreq = max(maxFreq, it.second);

        int ans = 0;
        
        for (int k=1;k<=maxFreq;k++) {
            int satis = 0;
            for (auto &it : mpp) {
                if (it.second >= k) satis++;
            }
            ans = max(ans, satis * k);
        }

        cout << ans << endl;
                
    }




    return 0;
}
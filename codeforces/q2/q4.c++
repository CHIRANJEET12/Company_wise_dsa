#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int,int> mpp;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }

        int a = 0, b = 0;
        bool f = true;
        int cnt = 1;
        while(!mpp.empty()) {
            unordered_map<int,int> mpp;
            for(int i = 0; i < n; i++) {
                mpp[arr[i]]++;
            }
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    cnt++;
                }else if(cnt==n){
                    break;
                }
            }
            
            int maxx = INT_MIN;
            int act;
            for(auto &p : mpp) {
                if(p.second > 0){
                    maxx = max(maxx, p.first);
                    act = p.second;
                }
            }

            if(f) a += act;
            else b += act;

            maxx--;
            f = !f;
        }

        cout << a << " " << b << "\n";
    }

    return 0;
}

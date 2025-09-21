#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        unordered_map<int,int> mpp;
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        bool ok = false;
        for (auto &p : mpp) {
            if (p.second > 1) { 
                ok = true;
                break;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
        t--;
    }


    return 0;
}
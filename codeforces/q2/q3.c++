#include <bits/stdc++.h>
using namespace std;


    vector<long> solve(){
            int n;
            cin >> n;
     
            vector<long> result(2 * n + 1, 0);     
            vector<bool> used(2 * n + 1, false); 
            int right = 2 * n;                    
     
            for (int x = n; x >= 1; --x) {
                while (right > 0 && used[right]) --right;
                int q = right;
                int distance = x;
     
                while (true) {
                    int p = q - distance;
                    if (p > 0 && !used[p]) {
                        result[p] = x;
                        result[q] = x;
                        used[p] = used[q] = true;
                        break;
                    }
                    distance += x;
                }
            }
     
            for (int i = 1; i <= 2 * n; ++i) {
                cout << result[i] << (i == 2 * n ? '\n' : ' ');
            }
     
        return result;
    }
     
    int main(){
        int t;
        cin >> t;
        while (t--){
            solve();
        }
        return 0;
    }
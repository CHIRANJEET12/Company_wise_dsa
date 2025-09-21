#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    int testcase = 1; 
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(2*n, 1);
        int m = arr.size();
        bool flag = true;
        int r = n;
        for(int i = 1; i <= n; i++){
            if(r == 1) break;
            if(flag){
                arr[i] = r;
                arr[i+r] = r;
                r--;
            } else {
                int ind = n-i-1;
                arr[ind] = r;
                arr[ind+r] = r;
                r--;
            }
            flag = !flag;
        }


        if(testcase == 2) {
            reverse(arr.begin(), arr.end());
        }

        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        testcase++; 
    }

    return 0;
}

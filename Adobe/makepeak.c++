#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n = 9;
    int k = 4;

    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin >> ans[i];
    }
    sort(ans.begin(),ans.begin()+k);
    sort(ans.begin()+k, ans.end());
    reverse(ans.begin()+k, ans.end());
    for(int i=0;i<n;i++){
        cout << ans[i];
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;

        if (x == y) {
            cout << -1 << "\n";
        } 
        else if(y==1 && x-y>=y){
            cout << -1 << "\n";
        }
        else if (x > y) {
            if (x >= y+2 && y >= 2){
                cout << 3 << "\n";
            }  
            else {
                cout << -1 << "\n";
            }
        } 
        else { 
            cout << 2 << "\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int m = (n+1) - x;
        int o = (n+1) - y;
        int c = (n+1) - m;
        int d = (n+1) - o;

        c = max(m,c);
        d = max(o,d);

        long long dcount = 0;
        dcount += c;
        dcount += (n+1) - dcount;
        cout<<dcount<<endl;
        
    }




    return 0;
}
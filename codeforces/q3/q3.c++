#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>sets(n);
        set<int>st;
        for(int i=0;i<n;i++){
            int l1;
            cin>>l1;
            sets[i].resize(l1);

            for(int j=0;j<l1;j++){
                cin>>sets[i][j];
                st.insert(sets[i][j]);
            }
        }
        vector<int>ans;
        for(int i : st){
            ans.push_back(i);
        }
        int c = 0;
        int cnt = 0;
        for (auto &s : sets) {
            if(s==ans){
                cnt++;
            }
            set<int> a(s.begin(), s.end());;
            for(int x : s){
                a.insert(x);
                set<int> ans_set(ans.begin(), ans.end());
                if(a == ans_set){
                    c++;
                }
            }
        }   
        if(cnt+c>=3){
            cout<<"Yes"<<endl;
        }

        cout<<"No"<<endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// only if sorted
pair<int,int> two_pointer(vector<int>& arr, int k){
    int n = arr.size();
    int l = 0;
    int r = n-1;
    while(l<=r){
        if(arr[l]+arr[r]==k){
            return {l,r};
        }else if(arr[l]+arr[r]>k){
            r--;
        }else{
            l++;
        }
    }
    return {-1,-1};
}

// when not sorted
vector<int> map_soln(vector<int>& arr, int k){
    unordered_map<int,int> mpp;
    int n = arr.size();
    for(int i=0;i<n;i++){
        int comp = k - arr[i];
        if(mpp.find(comp)!=mpp.end()){
            return {mpp[comp],i};
        }
        mpp[arr[i]] = i;
    }
    return {-1,-1};
}

int main(){

    int n = 4;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    int target = 9;

    pair<int,int> a = two_pointer(arr,target);

    cout << a.first << " " << a.second << endl;

    vector<int> b = map_soln(arr,target);

    cout << b[0] << " " << b[1] << endl;

    return 0;
}
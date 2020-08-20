// https://practice.geeksforgeeks.org/problems/overlapping-intervals/0


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> v[n];
        for(auto &i : v) cin>>i.first>>i.second;
        sort(v,v+n);
        vector<pair<int,int>> res;
        res.push_back(v[0]);
        for(int i=0;i<n;i++){
            if(res.back().second >=v[i].first){
                res.back().second = max(res.back().second,v[i].second);
            }
            else{
                res.push_back(v[i]);
            }
        }
        for(auto i : res) cout<<i.first<<" "<<i.second<<" ";
        cout<<endl;
    }
}
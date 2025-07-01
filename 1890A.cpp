#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++) cin>> vec[i];
        unordered_map<int,int> mpp;
        for(auto it: vec) mpp[it]++;
        if(mpp.size()==1) cout<<"YES"<<endl;
        else if(mpp.size()>2) cout<<"NO"<<endl;
        else{
            vector<int> diff;
            for(auto it: mpp) diff.push_back(it.second);
            if(abs(diff[0]-diff[1])<=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
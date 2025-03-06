#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        unordered_map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[str[i]]++;
        }
        int count=0;
        for(auto it:mpp){
            if(it.second %2!=0){
                count++;
            }
        }
        if(k>=count-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
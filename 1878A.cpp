#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            st.insert(x);
        }

        if(st.find(k)!=st.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int last=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,vec[i]-last);
            last=vec[i];
        }
        ans=max(ans,2*(x-last));
        cout<<ans<<endl;
    }
}
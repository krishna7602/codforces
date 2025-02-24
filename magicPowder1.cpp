#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int cookie, vector<int>&a , vector<int>& b,int k){
    int n=a.size();
    int required_powder=0;
    for(int i=0;i<n;i++){
        int powder=a[i]*cookie;
        if(powder>b[i]){
            required_powder+=(powder-b[i]);
        }
        if(required_powder>k) return false;
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n,0);
    vector<int> b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int lo = 0, hi = 1e6, ans = 0;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(check(mid,a,b,k)){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }
    cout<<ans<<endl;
}
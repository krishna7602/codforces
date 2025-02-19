#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long findpow(int n){
    if(n==0) return 1;
    if(n==1) return 2;

    long long x=findpow(n/2);
    long long ans=(x*x);
    if(n%2==1){
        ans*=2;
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    if(n>30){
        cout<<m;
    }
    else{
        int ans=m%findpow(n);
        cout<<ans;
    }
}
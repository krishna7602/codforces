#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    ll need=v[n-1];
    for(int i=n-1;i>=0;i--){
        if(v[i]>=need){
            sum+=need;
            need--;
        }
        else if(need > v[i]){
            sum += v[i];
            need = v[i] - 1;
        }
        if(need==0) break;
    }
    cout<<sum<<endl;
}
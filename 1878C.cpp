#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int totalsum=(n*(n+1))/2;
        int minsum=(k*(k+1))/2;
        int maxnum=n-k;
        int maxsum=(maxnum*(maxnum+1))/2;

        if(x>=minsum && x<= maxsum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
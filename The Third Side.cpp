#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++){
           int x;
           cin>>x;
           vec.push_back(x);
        }
        if(n==1) cout<<vec[0]<<endl;
        else{
            for(int i=n-2;i>=0;i--){
                int val=vec[i]+vec[i+1]-1;
                vec[i]=val;
            }
            cout<<vec[0]<<endl;
        }
        
    }
}
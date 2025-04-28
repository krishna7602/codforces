#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        vector<pair<int,int>> dirs={{-1,1},{1,-1},{1,1},{-1,-1}};
        set<pair<int,int>> king,queen;
        for(auto it:dirs){
            king.insert({xk+it.first*a,yk+it.second*b});
            king.insert({xk+it.first*b,yk+it.second*a});

            queen.insert({xq+it.first*a,yq+it.second*b});
            queen.insert({xq+it.first*b,yq+it.second*a});
        }
        int count=0;
        for(auto it:king){
            if(queen.find(it)!=queen.end()) count++;
        }
        cout<<count<<endl;
    }
}
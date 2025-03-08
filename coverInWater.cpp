#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int e=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(str[i]=='.') e++;
            if(i>0 && i<n-1){
                if(str[i]=='.' && str[i-1]=='.' && str[i+1]=='.'){
                    cout<<2<<endl;
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<e<<endl;
    }
}
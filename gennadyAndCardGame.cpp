#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<string> vec;
    for(int i=0;i<5;i++){
        string st;
        cin>>st;
        vec.push_back(st);
    }
    bool flag=false;
    for(int i=0;i<5;i++){
        string st=vec[i];
        if(st[0]==str[0] || st[0]==str[1] || st[1]==str[1] || st[1]==str[0]){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
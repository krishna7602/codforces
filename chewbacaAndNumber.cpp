#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.length();
    string ans="";
    for(int i=0;i<len;i++){
        if ((9 - (s[i] - '0')) < (s[i] - '0'))
            ans += (9 - (s[i] - '0')) + '0';
        else ans += s[i];
    }
    if(ans[0]=='0') ans[0]='9';
    cout<<ans<<endl;
    return 0;
}
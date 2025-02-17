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
        int ans=n;
        int count=0;
        for(int i=0;i<n;i++){
            count++;
            if(str[i]=='1'){
                ans=max(ans,(i+1)*2);
                count++;
            }
        }
        ans=max(ans,count);
        reverse(str.begin(),str.end());
        count=0;
        for(int i=0;i<n;i++){
            count++;
            if(str[i]=='1'){
                ans=max(ans,(i+1)*2);
                count++;
            }
        }
        ans=max(ans,count);
        cout<<ans<<endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        bool allsame=true;
        for(int i=0;i<n-1;i++){
            if(vec[i]!=vec[i+1]){
                allsame=false;
                break;
            }
        }
        if(allsame) cout<<1<<endl;
        else{
            bool sorted=true;
            for(int i=0;i<n-1;i++){
                if(vec[i]>vec[i+1]){
                    sorted=false;
                    break;
                }
            }
            if(!sorted) cout<<0<<endl;
            else{
                int mini=INT_MAX;
                for(int i=0;i<n-1;i++){
                    mini=min(mini,abs(vec[i]-vec[i+1]));
                }
                cout<<(mini)/2+1<<endl;
            }  
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        vector<int> vec(len,0);
        for(int i=0;i<len;i++) cin>> vec[i];
        vector<int> b,c;
        bool allsame=true;
        for(int i=0;i<len-1;i++){
            if(vec[i]!=vec[i+1]) allsame=false;
        }
        if(allsame){
            cout<<-1<<endl;
        }
        else{
            sort(vec.begin(),vec.end());
            int idx=-1;
            for(int i=0;i<len;i++){
                if(vec[0]==vec[i]) b.push_back(vec[i]);
                idx=i;
            }
            for(int i=idx;i<len;i++){
                c.push_back(vec[i]);
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it:b) cout<<it<<" ";
            cout<<endl;
            for(auto it:c) cout<<it<<" ";
            cout<<endl;
        }
    }
}
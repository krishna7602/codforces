#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+(c%2)>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}
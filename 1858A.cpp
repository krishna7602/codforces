#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a==b)&&(b==c)) cout<<"First"<<endl;
        else if(a%3==0 && b%3==0 && c%3==0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}
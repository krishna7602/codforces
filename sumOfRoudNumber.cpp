#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int len=s.length();
        int nonZero=0;
        for(int i=0;i<len;i++){
            if(s[i]!='0') nonZero++;
        }
        cout<<nonZero<<endl;
        int factor=1;
        for(int i=len-1;i>=0;i--){
            int num=s[i]-'0';
            if(num!=0){
                cout<<num*factor<<" ";
            }
            factor*=10;
        }
        cout<<endl;
    }
    
}
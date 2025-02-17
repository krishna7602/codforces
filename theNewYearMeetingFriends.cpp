#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<int> vec;
    vec.push_back(abs(x1-x2));
    vec.push_back(abs(x3-x2));
    vec.push_back(abs(x1-x3));

    sort(vec.begin(),vec.end());
    cout<<vec[0]+vec[1]<<endl;
}
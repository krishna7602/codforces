#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int lower_bound(vector<int>& nums,int target){
    int n=nums.size();
    int startidx=-1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(nums[mid]>=target){
            startidx=mid;
            hi=mid-1;
        }
        else if(nums[mid]<target) lo=mid+1;
    }
    return startidx;
}



int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int m;
    cin>>m;

    for(int i=1;i<n;i++){
        vec[i]+=vec[i-1];
    }
    while(m--){
        int x;
        cin>>x;
        int lb=lower_bound(vec,x);
        cout<<lb+1<<endl;
    }
}
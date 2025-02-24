#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;



// time limit exceed-bruteforce solution
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         vector<int> vec(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> vec[i];
//         }

//         sort(vec.begin(), vec.end());

//         int sum = 0;
//         for (auto it : vec) {
//             sum += it;
//         }

//         while (q--) {  
//             int x;
//             cin >> x;
//             if (x > sum) {
//                 cout << -1 << endl;
//             } else if (x == sum) {
//                 cout << n << endl;
//             } else {
//                 int tar = 0, count = 0;
//                 for (int j = n - 1; j >= 0; j--) { 
//                     tar += vec[j];
//                     count++;
//                     if (tar >= x) {
//                         cout << count << endl;
//                         break;
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }

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
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            vec[i]+=vec[i-1];
        }
        while(q--){
            int x;
            cin>>x;
            int lb=lower_bound(vec,x);
            lb+=1;
            if(vec[n-1]<x) cout<<-1<<endl;
            else if(vec[n-1]==x) cout<<n<<endl;
            else if(lb>n) cout<<-1<<endl;
            else cout<<lb<<endl;
        }
    }
}
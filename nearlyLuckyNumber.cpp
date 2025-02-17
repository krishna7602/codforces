#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
#include<climits>
using namespace std;
int main(){
   long long x;
   cin>>x;
   int count=0;
   while(x!=0){
      int last=x%10;
      x/=10;
      if(last==4 || last==7) count++;
   }
   if(count==4 || count==7) cout<<"YES";
   else cout<<"NO";
 
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        string ans = "";
        ans += str[0];
        for(int i = 1; i < str.size(); i++){
            if(str[i] == ' ')
                ans += str[i+1];
        }
        cout << ans << endl;
    }
}

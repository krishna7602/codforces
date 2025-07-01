#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int len;
        cin >> len;
        vector<int> vec(len, 0);
        for(int i = 0; i < len; i++) cin >> vec[i];

        sort(vec.begin(), vec.end());

        bool allsame = true;
        for(int i = 1; i < len; i++){
            if(vec[i] != vec[0]) {
                allsame = false;
                break;
            }
        }

        if(allsame){
            cout << -1 << endl;
        } else {
            vector<int> b, c;
            for(int i = 0; i < len; i++){
                if(vec[i] == vec[0]) b.push_back(vec[i]);
                else c.push_back(vec[i]);
            }
            cout << b.size() << " " << c.size() << endl;
            for(auto it : b) cout << it << " ";
            cout << endl;
            for(auto it : c) cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}

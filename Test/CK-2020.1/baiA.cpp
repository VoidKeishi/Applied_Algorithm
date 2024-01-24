#include <bits/stdc++.h>
using namespace std;

int T,n,m;
set<int> a,b;

int main(){
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> n;
        int temp;
        for (int j=0;j<n;j++){
            cin >> temp;
            a.insert(temp);
        }
        cin >> m;
        for (int j=0;j<m;j++){
            cin >> temp;
            b.insert(temp);
        }
        int count =0;
        for (auto& item : a){
            if (b.find(item)!=b.end()) count ++;
        }
        cout << count;
    }
}
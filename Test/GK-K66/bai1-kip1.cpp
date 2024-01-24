#include <bits/stdc++.h>
using namespace std;
#define MODULO 1000000007;

int n;
map<int,int> frequency;

int cal(int a){
    int result = (a-1)*a/2;
    return result;
}

int main(){
    cin >> n;
    int a;
    for (int i=0;i<n;i++){
        cin >> a;
        frequency[a]++;
    }
    int sum = 0;
    for (auto& pair : frequency){
        sum+=cal(pair.second);
        sum= sum % MODULO;
    }
    cout << sum;
}
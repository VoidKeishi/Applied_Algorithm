#include <bits/stdc++.h>
using namespace std;
#define MODULO 1000000007;

int n;
map<int,int> frequency;

int main(){
    cin >> n;
    int a;
    for (int i=0;i<n;i++){
        cin >> a;
        frequency[a]++;
    }
    int sum = 0;
    for (auto& pair : frequency){
        if (frequency.find(pair.first+1)!=frequency.end()) {
            sum+=pair.second* frequency[pair.first+1];
            sum=sum%MODULO;
        }
    }
    cout << sum;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MODULO 1000000007

int n;
int a[2000];
int cnt[100000] ={};

signed main(){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    int count = 0;
    int temp;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            temp = cnt[a[i]+a[j]];
            if (temp > 0) count = (count + temp) % MODULO;
        }
    }
    cout << count;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
int a[20];
int vehicle[20]; //0 mean first vehicle, 1 mean second vehicle
int sum=0;
int sum1=0;
int best_diff=INT32_MAX;

void Try(int k){
    for (int i=0;i<2;i++){
        vehicle[k]=i;
        sum1+=a[k]*vehicle[k];
        if (k==n-1){
            int diff = abs((sum-sum1) - sum1);
            best_diff = min(best_diff,diff);
        }
        else Try(k+1);
        sum1-=a[k]*vehicle[k];
    }
}

signed main(){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    Try(0);
    cout << best_diff;
    return 0;
}


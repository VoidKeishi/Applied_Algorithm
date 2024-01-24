#include <bits/stdc++.h>
using namespace std;

int n;
int a[100000];
int dp[100000];

int main(){
    cin >> n;
    cin >> a[0];
    dp[0] = 1;
    int mx;
    for (int i=1;i<n;i++){
        cin >> a[i];
        mx = 1;
        int flag = 0;
        for (int j=i-1;j>=0;j--){
            if (a[j]==a[i]-1){
                mx = max(dp[j],mx);
                flag = 1;
            }
        }
        if (flag==0) dp[i] = 1;
        else dp[i] = mx + 1;
    }
    mx = 1;
    for (int i=0;i<n;i++){
        mx = max(mx,dp[i]);
    }
    cout << mx;
}
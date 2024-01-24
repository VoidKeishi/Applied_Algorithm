#include <bits/stdc++.h>
using namespace std;

int n;
int num[20];
int mark[20];
int sum = 0;
int year;
int ans=0;

void Try(int k){
    for (int i=0;i<2;i++){
        mark[k]=i;
        sum += num[k]*mark[k];
        if (k == n-1) {
            if (sum>=year) ans ++;
        }
        else Try(k+1);
        sum -= num[k]*mark[k];
    }
}

int main(){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> num[i];
    }
    cin >> year;
    Try(0);
    cout << ans;
}
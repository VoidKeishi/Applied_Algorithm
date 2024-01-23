#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000000];

int main(){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int max_sum = 0;
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = max(sum+a[i],a[i]);
        max_sum = max(sum,max_sum);
    }
    cout << max_sum;
}
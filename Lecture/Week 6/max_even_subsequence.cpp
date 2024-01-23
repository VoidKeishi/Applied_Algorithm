#include <bits/stdc++.h>
using namespace std;

int n;
long long a[1000000];

int main(){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    long long max_sum = 0;
    long long sum = 0;
    for (int i=0;i<n;i++){
        sum = max(sum+a[i],a[i]);
        if (sum>max_sum&&sum%2==0){
            max_sum=sum;
        }
    }
    cout << max_sum;
}
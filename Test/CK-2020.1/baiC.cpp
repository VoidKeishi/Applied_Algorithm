#include <bits/stdc++.h>
using namespace std;

int T,n;
int a[100000];

int main(){
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> n;
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        int sum = 0;
        while(n>1){
            int index = 0; // Write index
            int mx = -1; // For searching max time while itterate
            int k = n; // Max read index
            if (n%2==1) k = n-1; // If n odd
            for (int i=0;i<k;i+=2){
                a[index]=a[i]+a[i+1];
                mx = max(a[index],mx);
                index++;
            }
            if (n%2==1) a[index+1]=a[n-1];
            sum+=mx;
            n = n/2 + n%2;
        }
        cout << sum;
    }
}
#include <bits/stdc++.h>
using namespace std;

int n;
int a[10000];
int L[10000];
//LIS[i] mean the longest increasing subsequence end at a[i]

int main(){
    cin >> n;
    cin >> a[0];
    L[0] = 1;
    int max;
    for (int i=1;i<n;i++){
        cin >> a[i];
        max = 1;
        int flag =0;
        for (int j=i-1;j>=0;j--){
            if (L[j]>=max && a[i]>a[j]){
                max = L[j];
                flag = 1;
            } 
        }
        if (flag ==0){
            L[i] = 1;
        }
        else L[i] = max + 1;
    }
    max = 1;
    for (int i=0;i<n;i++){
        if (L[i]>max) max = L[i];
    }
    cout << max;
    return 0;
}
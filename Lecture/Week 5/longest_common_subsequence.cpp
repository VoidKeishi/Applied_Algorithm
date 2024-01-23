#include <bits/stdc++.h>
using namespace std;

int m,n;
int a[10000];
int b[10000];
int L[10001][10001];
//L[i][j] mean the longest common subsequence with a end at i and b end at j

int main(){
    cin >> m >> n;
    for (int i=0;i<m;i++){
        cin >> a[i];
        L[0][i] = 0;
    }
    L[0][m]=0;
    for (int i=0;i<n;i++){
        cin >> b[i];
        L[i][0] = 0;
    }
    L[n][0]=0;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            if (a[i-1]==b[j-1]){
                L[i][j] = L[i-1][j-1]+1;            
            }
            else L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    cout << L[m][n];
}

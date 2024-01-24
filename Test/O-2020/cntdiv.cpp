#include <bits/stdc++.h>
using namespace std;

int Q;
int N;

int cntdiv(int N){
    long long T = N*(N+1)*(N+2);
}

int main(){
    cin >> Q;
    for (int i=0;i<Q;i++){
        cin >> N;
        cout << cntdiv(N);
    }
    return 0;
}

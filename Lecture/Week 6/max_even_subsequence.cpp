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
#include <bits/stdc++.h>

#define int long long

using namespace std;

const int MAXN = 2E6;
const int INF = 1e17;

int n, arr[MAXN], pre[MAXN];

void Solve()
{
    int mne = 0;
    int mno = 1e17 + 7;
    int res = -mne;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        cin >> arr[i];
        pre[i] = pre[i-1] + arr[i];
        res = max(res, pre[i] - (((pre[i] + INF) % 2) ? mno : mne));
        
        if((pre[i] + INF) % 2) mno = min(mno, pre[i]);
        else mne = min(mne, pre[i]);
    }
    if(res > -(1e17)) cout << res;
    else cout << "NOT_FOUND";
    return;
}

signed main()
{
    Solve();
    return 0;
}
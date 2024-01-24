#include <bits/stdc++.h>
using namespace std;

int t;
unsigned long long a,b;

string cal_sum(){
    int last_sum = a%10+b%10;
    a = a/10;
    b = b/10;
    string result;
    if (a+b==0) result = to_string(last_sum);
    else result = to_string(a+b+last_sum/10) + to_string(last_sum%10);
    return result;
}

int main(){
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> a >> b;
        cout << cal_sum();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    long long int a,b;
    cin >> a >> b;
    int a1,b1,c1;
    a1=a%10;
    b1=b%10;
    c1=(a1+b1);
    a=a/10;
    b=b/10;
    std::string s="";
    if (c1>=10){
        c1=c1%10;
        s += std::to_string(a+b+1);
        s += std::to_string(c1);
    }
    else{
        if (a+b==0) s += std::to_string(c1);
        else{
            s += std::to_string(a+b);
            s += std::to_string(c1);
        }
    }
    cout << s << endl;
    return 0;
}
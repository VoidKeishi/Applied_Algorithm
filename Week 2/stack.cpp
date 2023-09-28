#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    stack<int> s;
    for (int i=0;i<=5;i++){
        s.push(i);
        cout << "Push" << i << endl;
    }
    for (int i=0;i<=5;i++){
        cout << "Pop" << s.top() << endl;
        s.pop();
    }
}
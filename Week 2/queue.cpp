#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    queue<int> q;
    for (int i=0;i<=5;i++){
        q.push(i);
        cout << "Push" << i << endl;
    }
    for (int i=0;i<=5;i++){
        cout << "Pop" << q.front() << endl;
        q.pop();
    }
}
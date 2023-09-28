#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["a"] = 1;
    m["b"] = 2;
    m["c"] = 3;
    string k = "a";
    cout << m[k] << endl;
    for (map<string, int>::iterator p = m.begin(); p != m.end(); p++)
    {
        cout << p->first << " is mapped to value " << p->second << endl;
    }
    unordered_map<string, int> um;
    um["a"] = 1;
    um["b"] = 2;
    um["c"] = 3;
    string k2 = "a";
    cout << um[k2] << endl;
    for (unordered_map<string, int>::iterator p = um.begin(); p != um.end(); p++)
    {
        cout << p->first << " is mapped to value " << p->second << endl;
    }
}
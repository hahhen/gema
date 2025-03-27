// https://codeforces.com/contest/486/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, res; 
    cin >> a;
    for(int i=1;i<=a;i++){
        res = res + (pow(-1,i)*i);
    }
    cout << res;
}
// https://codeforces.com/problemset/problem/678/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;

    x = n + 1;

    for (; x % k != 0; x++);

    cout << x;

    return 0;
}
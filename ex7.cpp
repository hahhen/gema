// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, k, n, price, borrow;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        price += i * k;
    }

    borrow = price - n;
    if (borrow < 0)
    {
        cout << 0;
    }
    else
    {
        cout << borrow;
    }

    return 0;
}
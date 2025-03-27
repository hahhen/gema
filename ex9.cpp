// https://codeforces.com/contest/1807/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }

    return 0;
}
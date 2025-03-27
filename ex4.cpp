// https://neps.academy/br/exercise/59

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, in = 0;
    cin >> a >> b >> c >> d;
    if (d != b)
    {
        in++;
        if (c == a)
        {
            in++;
        }
    }
    else if (c != a)
    {
        in++;
    }
    cout << in;
}
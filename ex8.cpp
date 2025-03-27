// https://codeforces.com/contest/659/problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x1, y1, x2, y2, danger;
    string last, current;

    cin >> n;
    cin >> x1 >> y1;

    for (int i = 1; i <= n; i++)
    {
        cin >> x2 >> y2;

        if (x1 > x2)
        {
            current = "direita";
        }
        else if (x1 < x2)
        {
            current = "esquerda";
        }
        else if (y1 > y2)
        {
            current = "cima";
        }
        else
        {
            current = "baixo";
        }

        if ((last == "direita" && current == "cima") ||
            (last == "esquerda" && current == "baixo") ||
            (last == "cima" && current == "esquerda") ||
            (last == "baixo" && current == "direita"))
            danger++;
        
        last = current;
        x1 = x2;
        y1 = y2;
    }

    cout << danger;

    return 0;
}
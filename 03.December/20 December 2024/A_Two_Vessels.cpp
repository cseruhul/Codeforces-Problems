#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float a, b, c;
        cin >> a >> b >> c;

        float extra = abs(a - b) / 2;

        cout << ceil(extra / c) << endl;
    }

    return 0;
}
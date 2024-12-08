#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        bool flag = isPrime(n);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
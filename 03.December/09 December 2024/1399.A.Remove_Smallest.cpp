#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) > 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
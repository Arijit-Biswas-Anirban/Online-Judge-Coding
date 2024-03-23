#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> containers(n);
        long long int total = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> containers[i];
            total += containers[i];
        }

        if (total % n == 0)
        {
            long long int target = total / n;
            bool possible = true;
            for (int i = 0; i < n; ++i)
            {
                if (containers[i] > target)
                {
                    int diff = containers[i] - target;

                    if (i + 1 < n)
                    {
                        containers[i] = target;
                        containers[i + 1] += diff;
                    }
                    else
                    {
                        possible = false;
                        break;
                    }
                }
                else if (containers[i] < target)
                {
                    possible = false;
                    break;
                }
            }
            if (possible)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

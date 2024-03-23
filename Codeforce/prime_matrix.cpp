#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
int tmp[N];
int arr[505][505];

vector<int> primes;
void anu()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (tmp[i] == 0)
        {
            for (int j = i * i; j <= N; j += i)
            {
                tmp[j] = 1;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (tmp[i] == 0)
        {
            primes.push_back(i);
        }
    }

    // for(int i=0; i<primes.size(); i++) cout<<primes[i]<<" ";
}

int himu(int num)
{
    auto it = lower_bound(primes.begin(), primes.end(), num);
    //cout << *it << " " << *it - num << " ";
    return abs(*it - num);
}

int main()
{
    anu();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = 1e5 + 7;
    if (n == 1 && m == 1)
    {
        int sum = himu(arr[0][0]);
        ans = min(ans, sum);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += himu(arr[i][j]);
            }
            ans = min(sum, ans);
        }
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += himu(arr[j][i]);
            }
            ans = min(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}
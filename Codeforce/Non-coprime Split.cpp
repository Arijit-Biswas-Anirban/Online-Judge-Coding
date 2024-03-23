#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int x, y;
        cin >> x >> y;
        int flag = 0;

        for (int i = 2; i<=y; i++)
        {
            for(int j = y - 1; j>1; j--)
            {
                if ((i+j) >= x && (i+j) <= y)
                {
                    if(__gcd(i, j) != 1 )
                    {
                        cout << i << " " << j << endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if (!flag)
            cout << -1 << endl;
    }

    return 0;
}

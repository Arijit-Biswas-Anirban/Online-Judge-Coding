#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x;
        cin >> x;

        if (x <= 26)
        {
            char c = x - 3 + 'a';
            cout << "aa" << c << endl;
        }
        else if (x <= 52)
        {
            if (x == 27)
            {
                char ccc = x - 2 + 96;
                cout << "aa" << ccc << endl;
            }
            else
            {
                char c = x - 28 + 'a';
                cout << "a" << c << "z" << endl;
            }
        }
        else
        {
            char c = (x - 53) % 26 + 'a';
            cout << c << "zz" << endl;
        }
    }

    return 0;
}

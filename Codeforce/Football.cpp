#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int zeros = 0;
    int ones = 0;

    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == '0')
        {
            zeros++;
            ones = 0;
        }
        else
        {
            ones++;
            zeros = 0;
        }

        if (zeros >= 7 || ones >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}

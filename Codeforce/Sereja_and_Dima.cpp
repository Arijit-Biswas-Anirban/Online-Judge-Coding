#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[1000], sereja = 0, dima = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;

    int serejaT = 1;

    while (left <= right)
    {
        int max;
        if (arr[left] >= arr[right])
        {
            max = arr[left];
            left++;
        }
        else
        {
            max = arr[right];
            right--;
        }

        if (serejaT)
            sereja += max;
        else
            dima += max;

        serejaT = !serejaT;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}

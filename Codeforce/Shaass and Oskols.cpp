/*
Shaass has decided to hunt some birds. There are n horizontal electricity wires aligned parallel to each other. Wires are numbered 1 to n from top to bottom. On each wire there are some oskols sitting next to each other. Oskol is the name of a delicious kind of birds in Shaass's territory. Supposed there are ai oskols sitting on the i-th wire.


Sometimes Shaass shots one of the birds and the bird dies (suppose that this bird sat at the i-th wire). Consequently all the birds on the i-th wire to the left of the dead bird get scared and jump up on the wire number i - 1, if there exists no upper wire they fly away. Also all the birds to the right of the dead bird jump down on wire number i + 1, if there exists no such wire they fly away.

Shaass has shot m birds. You're given the initial number of birds on each wire, tell him how many birds are sitting on each wire after the shots.

Input
The first line of the input contains an integer n, (1 ≤ n ≤ 100). The next line contains a list of space-separated integers a1, a2, ..., an, (0 ≤ ai ≤ 100).

The third line contains an integer m, (0 ≤ m ≤ 100). Each of the next m lines contains two integers xi and yi. The integers mean that for the i-th time Shaass shoot the yi-th (from left) bird on the xi-th wire, (1 ≤ xi ≤ n, 1 ≤ yi). It's guaranteed there will be at least yi birds on the xi-th wire at that moment.

Output
On the i-th line of the output print the number of birds on the i-th wire.

Examples
inputCopy
5
10 10 10 10 10
5
2 5
3 13
2 12
1 13
4 6
outputCopy
0
12
5
0
16
inputCopy
3
2 4 1
1
2 2
outputCopy
3
0
3
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        x--;

        if (x > 0)
            arr[x - 1] += y - 1;
        if (x < n - 1)
            arr[x + 1] += arr[x] - y;
        arr[x] = 0;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;   cin>>test;

    while(test--)
    {
        int a1,a2,b1,b2;    cin>>a1>>a2>>b1>>b2;

        int w1 = max(a1,a2), w2 = max(b1,b2);
        int l1 = min(a1,a2), l2 = min(b1,b2);

        if(w1==w2 && (l1+l2 == w1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}

/*
Vasya claims that he had a paper square. He cut it into two rectangular parts using one vertical or horizontal cut. Then Vasya informed you the dimensions of these two rectangular parts. You need to check whether Vasya originally had a square. In other words, check if it is possible to make a square using two given rectangles.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases in the input. Then t
 test cases follow.

Each test case is given in two lines.

The first line contains two integers a1
 and b1
 (1≤a1,b1≤100
) — the dimensions of the first one obtained after cutting rectangle. The sizes are given in random order (that is, it is not known which of the numbers is the width, and which of the numbers is the length).

The second line contains two integers a2
 and b2
 (1≤a2,b2≤100
) — the dimensions of the second obtained after cutting rectangle. The sizes are given in random order (that is, it is not known which of the numbers is the width, and which of the numbers is the length).

Output
Print t
 answers, each of which is a string "YES" (in the case of a positive answer) or "NO" (in the case of a negative answer). The letters in words can be printed in any case (upper or lower).

Example
inputCopy
3
2 3
3 1
3 2
1 3
3 3
1 3
outputCopy
Yes
Yes
No

*/

/*
After their adventure with the magic mirror Kay and Gerda have returned home and sometimes give free ice cream to kids in the summer.

At the start of the day they have x ice cream packs. Since the ice cream is free, people start standing in the queue before Kay and Gerda's house even in the night. Each person in the queue wants either to take several ice cream packs for himself and his friends or to give several ice cream packs to Kay and Gerda (carriers that bring ice cream have to stand in the same queue).

If a carrier with d ice cream packs comes to the house, then Kay and Gerda take all his packs. If a child who wants to take d ice cream packs comes to the house, then Kay and Gerda will give him d packs if they have enough ice cream, otherwise the child will get no ice cream at all and will leave in distress.

Kay wants to find the amount of ice cream they will have after all people will leave from the queue, and Gerda wants to find the number of distressed kids.

Input
The first line contains two space-separated integers n and x (1 ≤ n ≤ 1000, 0 ≤ x ≤ 109).

Each of the next n lines contains a character '+' or '-', and an integer di, separated by a space (1 ≤ di ≤ 109). Record "+ di" in i-th line means that a carrier with di ice cream packs occupies i-th place from the start of the queue, and record "- di" means that a child who wants to take di packs stands in i-th place.

Output
Print two space-separated integers — number of ice cream packs left after all operations, and number of kids that left the house in distress.

Examples
inputCopy
5 7
+ 5
- 10
- 20
+ 40
- 20
outputCopy
22 1
inputCopy
5 17
- 16
- 2
- 98
+ 100
- 98
outputCopy
3 2
Note
Consider the first sample.

Initially Kay and Gerda have 7 packs of ice cream.
Carrier brings 5 more, so now they have 12 packs.
A kid asks for 10 packs and receives them. There are only 2 packs remaining.
Another kid asks for 20 packs. Kay and Gerda do not have them, so the kid goes away distressed.
Carrier bring 40 packs, now Kay and Gerda have 42 packs.
Kid asks for 20 packs and receives them. There are 22 packs remaining.
*/

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long long int n,x,left=0;
//    cin>>n>>x;
//    cin.ignore();
//    while(n--)
//    {
//        string s;
//        getline(cin,s);
//
//        long long int num = 0;
//        for(int i=0; i<s.size(); i++)
//        {
//            if(s[i] == ' ' || s[i] == '+' || s[i] == '-')
//                continue;
//            num = num*10 + (s[i] - '0');
//            //cout<<num<<endl;
//        }
//
//        for(int i=0; i<s.size(); i++)
//        {
//            if(s[i] == '+')
//                x+= num;
//            else if(s[i] == '-')
//            {
//                if(x>=num)
//                    x-= num;
//                else
//                    left++;
//            }
//        }
//    }
//    cout<<x<<" "<<left<<endl;
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,left=0;
    cin>>n>>x;
    cin.ignore();

    while(n--)
    {
        char op;
        int num;
        cin>>op>>num;

        if(op == '+') x += num;
        else if(x>=num) x -= num;
        else    left++;
    }

    cout<<x<<" "<<left<<endl;
    return 0;
}

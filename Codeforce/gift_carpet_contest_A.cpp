#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int n,m,i,j,k;
    string s[100][100],check[4];
    cin>>n>>m;

    while(test--)
    {
        if(m>=4)
        {
            for( i=1; i<=n; i++)
            {
                for( j=1; j<=m; j++)
                {
                    cin>>s[i][j];
                }
            }
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m;)
                {

                    if(s[i][j]=="v")
                    {
                        check[i-1]='v';
                        break;
                    }
                    else if(s[i][j]=="i")
                    {
                        check[i-1] = 'i';
                        break;
                    }
                    else if(s[i][j]=="k")
                    {
                        check[i-1] = 'k';
                        break;
                    }
                    else if(s[i][j]=="a")
                    {
                        check[i-1] = 'a';
                        break;
                    }
                    else
                        j++;

                }
            }
        }

    }

    cout<<check;


    return 0;
}

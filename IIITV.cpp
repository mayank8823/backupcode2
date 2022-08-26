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
        string str;
        for (int i = 1; i <= n; i++)
        {
            cin >> str[i];
            if (str[0] = 'Y' || (str[0]='N'))
            {
                if (str[i] == str[i + 1])
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
        }
    }
}
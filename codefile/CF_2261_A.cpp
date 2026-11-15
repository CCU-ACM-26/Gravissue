#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, o = 0, L = 0, R = 0;
        bool flag = false;
        string s;
        scanf("%d", &n);
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (!flag)
                {
                    L = i + 1;
                    flag = true;
                }
                R = i + 1;
                o++;
            }
        }
        if (o == 2)
            printf("1\n");
        else
            printf("%d\n", R - L);
    }
    return 0;
}
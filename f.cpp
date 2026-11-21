#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m, d=0;
    cin >> n >> m;
    vector<char> b(n, '-');
    int limite = ceil(n / 2.0);
    for (int i = 0; i < 2 && m; i++)
    {
        for (int j = i; j < limite && m; j += 2)
        {
            if (m && b[j] == '-')
            {
                b[j] = 'B';
                m--;
            }
            if (m && b[n - 1 - j] == '-')
            {
                b[n - 1 - j] = 'B';
                m--;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == 'B' && b[i + 1] == 'B') d++;
            
    }
    cout << d << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << b[i]; 
        if (b[i] == 'B' && b[i + 1] == 'B')
            cout << '|';
    }
    cout << b[n-1] << "\n";
    return 0;
}
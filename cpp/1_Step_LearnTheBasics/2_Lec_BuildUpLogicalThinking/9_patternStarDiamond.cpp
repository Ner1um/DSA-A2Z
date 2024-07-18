#include <bits/stdc++.h>
using namespace std;

void nStarDiamond(int n)
{
    int col = 2 * n - 1;
    int col2 = col - 2;
    int c = 1;

    for (int m=n; m>=0; m--)
    {
        if (m != n)
            cout << endl;
        for (int a = m; a > 1; a--)
        {
            cout << " ";
        }

        if (c <= col)
        {
            for (int b = 0; b < c; b++)
            {
                cout << "*";
            }
            c = c + 2;
        }

        for (int a = m; a > 0; a--)
        {
            cout << " ";
        }
    }

    for (int i=1; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout << " ";
        }

        for (int k=col2; k > 0; k--)
        {
            cout << "*";
        }
        col2 = col2 - 2;

        for (int j=0; j<i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    int flag = 1;
    while (flag != 0)
    {
        cout << "Enter the N-Dimension: " << endl;
        
        cin >> n;
        if (1 <= n && n <= 20)
        {
            flag = 0;
            nStarDiamond(n);
        }
        else {
            cout << "Out of Range! Try again." << endl;
        }
    }
    return 0;
}

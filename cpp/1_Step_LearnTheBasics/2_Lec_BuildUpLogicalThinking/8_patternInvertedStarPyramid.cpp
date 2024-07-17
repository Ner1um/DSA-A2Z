#include <bits/stdc++.h>
using namespace std;

void nForest(int n)
{
    int col = 2 * n - 1;
    for (int i=0; i<n; i++)
    {
        if(i > 0)
        {
            for (int j=0; j<i; j++)
            {
                cout << " ";
            }
        }

        for (int k=col; k > 0; k--)
        {
            cout << "*";
        }
        col = col - 2;

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
            nForest(n);
        }
        else {
            cout << "Out of Range! Try again." << endl;
        }
    }
    return 0;
}

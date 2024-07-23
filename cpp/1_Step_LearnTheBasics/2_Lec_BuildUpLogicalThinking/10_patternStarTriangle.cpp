#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    int row = 2 * n - 1;
    int col = 1;
    int col2 = n-1;
    for (int i=0; i < row; i++)
    {
        if (col <= n)
        {
            for (int j=0; j<col; j++)
            {
                cout << "*";
            }
            cout << endl;
            col++;
        } else {
            for (int k=0; k<col2; k++)
            {
                cout << "*";
            }
            cout << endl;
            col2--;
        }
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
            nStarTriangle(n);
        }
        else {
            cout << "Out of Range! Try again." << endl;
        }
    }
    return 0;
}

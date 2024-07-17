#include <bits/stdc++.h>
using namespace std;

void nForest(int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << "*";
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
        if (1 <= n && n <= 25)
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

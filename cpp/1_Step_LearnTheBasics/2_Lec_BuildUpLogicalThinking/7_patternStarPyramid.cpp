#include <bits/stdc++.h>
using namespace std;

void nForest(int n)
{
    int temp = 1;
    int mid = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = mid; j > 0; j--)
        {
            cout << " ";
        }
        mid--;
        
        for (int m = 0; m < temp; m++)
        {
            cout << "*";
        }
        temp = temp + 2;
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

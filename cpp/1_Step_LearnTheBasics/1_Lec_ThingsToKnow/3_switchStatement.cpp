
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

#define _USE_MATH_DEFINES

using namespace std;

class Solution
{
public:
    double switchCase(int choice, vector<double> &arr)
    {
        switch (choice)
        {
        case 1:
            return M_PI * pow(arr[0], 2);
        case 2:
            return arr[0] * arr[1];
        default:
            return -1;
        }
    }
};

int main()
{
    Solution sol;
    int choice;
    vector<double> myArray(2);  // Ensure the vector has at least 2 elements

    // Read choice
    cout << "Enter choice: ";
    cin >> choice;

    // Read vector elements
    cout << "Enter two elements: ";
    cin >> myArray[0] >> myArray[1];

    double output = sol.switchCase(choice, myArray);
    cout << "Result: " << output << endl;

    return 0;
}

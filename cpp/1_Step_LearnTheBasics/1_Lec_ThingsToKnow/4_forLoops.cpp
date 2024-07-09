#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
  public:
    int Fibonnaci(int n)
    {
      vector<int> arr(n);
      arr[0] = 1;
      arr[1] = 1;
      if (n >= 3 && n<= 1000)
      {
        for (int i = 2; i < n; i++)
        {
          arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n-1];
      } else if (n == 1 || n == 2)
        return 1;
        else
          return -1;
    }
};

int main()
{
  Solution sol;
  int n;
  cin >> n;
  int output = sol.Fibonnaci(n);
  cout << "The " << n << "th value in the series is " << output << endl;
  return 0;
}

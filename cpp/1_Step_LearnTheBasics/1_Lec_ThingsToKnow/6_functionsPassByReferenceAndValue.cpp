#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
      vector<int> arr;
      arr.push_back(a + 1);
      b = b + 2;
      return arr;
    }
};

int main()
{
  Solution sol;
  int a, b;
  vector<int> arr;

  cin >> a >> b;
  arr = sol.passedBy(a, b);
  cout << arr[0] << " " << b;
  return 0;
}

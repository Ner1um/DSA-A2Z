#include <iostream>
#include <string>

using namespace std;

class Solution
{
  public:
    string compareNM(int n, int m)
    {
      if (n<m)
        return "lesser";
      else if (n>m)
        return "greater";
      else 
        return "equal";
    }
};

int main()
{
  int n, m;
  cin >> n >> m;
  Solution sol;
  string output = sol.compareNM(n,m);
  cout << n << " is " << output << endl;
  return 0;
}

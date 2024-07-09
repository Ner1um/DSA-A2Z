#include <iostream>
#include <string>

using namespace std;

class Solution
{
  public: int dataTypeSize(string str)
  {
    if (str == "Character")
      return 1;
    else if (str == "Integer")
      return 4;
    else if (str == "Double")
      return 8;
    else if (str == "Float")
      return 4;
    else if (str == "Long")
      return 8;
    else
      return -1;

  }
};

int main()
{
  string str;
  Solution solution;
  cin >> str;
  int output = solution.dataTypeSize(str);
  cout << "Size of " << str << " is " << output << " bytes." << endl;
  return 0;
}

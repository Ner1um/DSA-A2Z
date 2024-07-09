#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bubbleSort(int arr[], int n) {
      int temp;
      for (int i = 0; i < n-1; i++)
      {
        for (int j = 0; j < n-i-1; j++)
        {
          if (arr[j] > arr[j+1])
          {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
          }
        }
      }
    }
};

int main()
{
  Solution sol;
  int arraySize;
  cout << "Enter the size of the array: " << endl;
  cin >> arraySize;
  int* arr = new int[arraySize];
  cout << "Enter the values: " << endl;
  for (int i=0; i < arraySize; i++)
  {
    cin >> arr[i];
  }
  sol.bubbleSort(arr, arraySize);

  cout << endl << "Sorted array: " << endl;
  for (int i=0; i < arraySize; i++)
    cout << arr[i];

  return 0;
}

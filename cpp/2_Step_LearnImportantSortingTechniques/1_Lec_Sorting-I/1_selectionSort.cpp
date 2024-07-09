#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
      static int callCount = 0;
      int temp;
      temp = arr[i];
      arr[i] = arr[callCount];
      callCount++;
      return temp;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for (int i=0; i < n - 1; i++)
       {
        int minIndex = i;
        for (int j=i+1; j < n; j++)
        {
          if (arr[j] < arr[minIndex])
            minIndex = j;
        }
        arr[i] = select(arr, minIndex);
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
  for (int i = 0; i < arraySize; i++)
  {
    cin >> arr[i];
  }
  sol.selectionSort(arr, arraySize); 
  
  cout << endl << "Sorted array: " << endl;
  for (int i = 0; i < arraySize; i++)
    cout << arr[i];

  return 0;
}

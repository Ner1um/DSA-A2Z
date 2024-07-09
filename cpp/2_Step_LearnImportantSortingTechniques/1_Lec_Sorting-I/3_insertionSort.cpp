#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    void insert(int arr[], int i)
    {
      //code here
      arr[i+1] = arr[i];
    }
    public:
  //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
      int key, j;
      for (int i=1; i<=n-1; i++)
      {
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > key)
        {
          insert(arr, j);
          j = j-1;
        } 
        arr[j+1] = key;
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
  sol.insertionSort(arr, arraySize);

  cout << endl << "Sorted array: " << endl;
  for (int i=0; i < arraySize; i++)
    cout << arr[i] << " ";

  return 0;
}

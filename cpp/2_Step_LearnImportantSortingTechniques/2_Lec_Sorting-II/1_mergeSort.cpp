#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;

        int* leftAux = new int[n1];
        int* rightAux = new int[n2];

        for (int i = 0; i < n1; ++i)
            leftAux[i] = arr[l + i];
        for (int j = 0; j < n2; ++j)
            rightAux[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;

        while (i < n1 && j < n2)
        {
            if (leftAux[i] <= rightAux[j])
            {
                arr[k] = leftAux[i];
                ++i;
            }
            else
            {
                arr[k] = rightAux[j];
                ++j;
            }
            ++k;
        }

        while (i < n1)
        {
            arr[k] = leftAux[i];
            ++i;
            ++k;
        }

        while (j < n2)
        {
            arr[k] = rightAux[j];
            ++j;
            ++k;
        }

        delete[] leftAux;
        delete[] rightAux;
    }

    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int middle = l + (r - l) / 2;
            mergeSort(arr, l, middle);
            mergeSort(arr, middle + 1, r);
            merge(arr, l, middle, r);
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
    for (int i = 0; i < arraySize; ++i)
    {
      cin >> arr[i];
    }

    int low = 0;
    int high = arraySize - 1;
    sol.mergeSort(arr, low, high);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < arraySize; ++i)
    {
      cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

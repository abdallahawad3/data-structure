#include <iostream>
#include <cmath>
using namespace std;
void selection_sort(int arr[], int size)
{
    int minIndx;
    for (int i = 0; i < size; i++)
    {
        minIndx = i;
        for (int j = i + 1; j < size; j++)
            if (arr[minIndx] > arr[j])
                minIndx = j;
        swap(arr[minIndx], arr[i]);
    }
}
int main()
{
    int arr[] = {8, 7, 2, 6, 4}; // 2 4 6 7 8
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The array befor sorting: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    selection_sort(arr, size);
    cout << "\nThe array after sorting: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
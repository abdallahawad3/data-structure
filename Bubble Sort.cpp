#include <iostream>
#include <cmath>
using namespace std;
void Bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}

int main()
{
    int arr[] = {4, 8, 1, 9, 0, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The array befor sorting: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    Bubble_sort(arr, size);
    cout << "\nThe array after sorting: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
#include <iostream>
using namespace std;

int Binary_search(int arr[], int size, int low, int hight, int key)
{
    if (hight < low)
        return -1;
    int mid = (low + hight) / 2;
    if (arr[mid] == key)
        return mid;
    if (key > arr[mid])
        return Binary_search(arr, size, (mid + 1), hight, key);

    return Binary_search(arr, size, low, (hight - 1), key);
}

int deleteElement(int arr[], int size, int key)
{
    int pos = Binary_search(arr, size, 0, (size - 1), key);
    if (pos == -1)
        cout << "The elelent not found " << endl;

    for (int i = pos; i < size - 1; i++)
        arr[i] = arr[i + 1];
    return (size - 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int key;
    cout << "\nThe element befor delete: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nEnter the element to delete: ";
    cin >> key;

    n = deleteElement(arr, size, key);
    cout << "\nThe element after delete: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
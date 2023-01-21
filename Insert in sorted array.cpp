#include <iostream>
using namespace std;
int insert(int arr[], int size, int n, int key)
{
    if (n >= size)
        return n;
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = key;
    return (n + 1);
}
int main()
{
    int arr[20] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int key;
    cout << "\nThe element befor insert: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nEnter the element to insert: ";
    cin >> key;
    n = insert(arr, size, n, key);
    cout << "\nThe element after insert: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
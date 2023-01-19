#include <iostream>
using namespace std;

int insert(int arr[], int size, int n, int key)
{
    arr[n] = key;
    return (n + 1);
}
int main()
{
    int key;
    int arr[20] = {50, 8, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 4;
    cout << "The array befor insert: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    if (n < size)
    {
        cout << "Enter the element to insert: ";
        cin >> key;
        n = insert(arr, size, n, key);
        cout << "The array after insert: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
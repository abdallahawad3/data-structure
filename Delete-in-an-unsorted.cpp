#include <iostream>
using namespace std;
int search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            return i;
    }
    return -1;
}

int Delete(int arr[], int size, int key)
{
    int pos = search(arr, key, size);
    if (pos == -1)
        cout << "The element not found \n";
    else
        for (int i = pos; i < size - 1; i++)
            arr[i] = arr[i + 1];
    return (size - 1);
}
int main()
{
    int key;
    int arr[4] = {50, 8, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 4;
    cout << "The array befor dalete: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\nEnter the element to delete: ";
    cin >> key;
    size = Delete(arr, size, key);
    cout << "The array after dalete: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
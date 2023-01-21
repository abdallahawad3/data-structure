#include <iostream>
using namespace std;

int Binary_search(int arr[], int size, int low, int hight, int key)
{

    if (hight < low)
        return -1;
    int mid = (low + hight) / 2;
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return Binary_search(arr, size, (mid + 1), hight, key);

    return Binary_search(arr, size, low, (mid - 1), key);
}
/*
        search for 50

        10 20 30 40 50 100 ==>  mid=(low+hight)/2=2.5 // mid=2
                                arr[mid]==key ==>  //20 == 50 ===> NO
                                key>arr[mid]  ==>  //50  > 20 ===> yes
                                return Binary_search(arr, size, (mid + 1), hight, key) ===> the part > arr[mid]

        10 20|| 30 40 50 100 ==>mid=(low+hight)/2=(3+5)/2=4   ===> mid=4
                                arr[mid]==key ==>  //50 == 50 ===> yes
                                return mid; ====> 4
*/
int main()
{
    int key;
    int arr[] = {10, 20, 30, 40, 50, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int hight = (size - 1);
    cout << "\nEnter the key you search for: ";
    cin >> key;
    int pos = Binary_search(arr, size, low, hight, key);
    if (pos == -1)
        cout << "\nThe key not found ";
    else
        cout << "The elemnt found at position: " << pos << "\n";
    return 0;
}
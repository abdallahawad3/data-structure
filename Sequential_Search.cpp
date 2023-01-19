#include <iostream>
using namespace std;
int Liner_search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int max_size,key;
    cout<<"Enter the max size of array: ";
    cin>>max_size;
    int Arr[max_size];
    for(int i=0;i<max_size;i++)
    {
        cout<<"Enter the value NO: "<<i+1<<": ";
        cin>>Arr[i];
    }
    cout<<"Enter the element you search for it: ";
    cin>>key;
    int n=Liner_search( Arr, max_size, key);
    if(n==-1)
    {
        cout<<"The element not found ";
    }
    else
        cout<<"The element found at position: "<<n;
    return 0;
}

#include <iostream>
using namespace std;
void insertionSort(int array[], int sizeOfArray)
{
    int key, j;
    for (int i = 1; i < sizeOfArray; i++)//n
                                            /*
                                            0  1 2 3  4
                                            10 8 7 2 90   key = 8      j=0 
                                                */
    {
        key = array[i];
        j = i - 1;//0 -1
        while (j >= 0 && array[j] > key)//array[0]>8    10 > 8
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;   //array[-1+1] = key
    }
}

int main()
{ 
    int Array[5] = {10, 8, 7, 2, 90};
    int Size = sizeof(Array) / sizeof(Array[0]);
    insertionSort(Array, Size);
    for (int i = 0; i < Size; i++)
        cout << Array[i] << " ";
    return 0;
}
#include <iostream>
using namespace std;

void Merge(int arrayToMerge[], int start, int mid, int end)
{
    int i, j, k;

    int leftLength = mid - start + 1;
    int rightLength = end - mid;

    int *leftArray = new int[leftLength];
    int *rightArray = new int[rightLength];

    for (i = 0; i < leftLength; i++)
        leftArray[i] = arrayToMerge[start + i];
        
        
    for (j = 0; j < rightLength; j++)
        rightArray[j] = arrayToMerge[mid + 1 + j];



    i=0;
	j=0;
    k=start;

    while (i < leftLength && j < rightLength)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arrayToMerge[k] = leftArray[i];
            i++;
        }
        else
        {
            arrayToMerge[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftLength)
    {
        arrayToMerge[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightLength)
    {
        arrayToMerge[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int Array[], int start, int end)
{
    if (start < end)
    {
		int midPoint =(start+end)/2;
        mergeSort(Array, start, midPoint);
        mergeSort(Array, midPoint + 1, end);
        // call merge
        Merge(Array, start, midPoint, end);
    }
}

int main()
{
    int array[] = {102, 8, 732, 22};
    int Size = sizeof(array) / sizeof(array[0]);
    int end = Size - 1;

    cout << "The array befor sorting: ";
    for (int i = 0; i < Size; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << "--------------------------------------"<<endl;
    mergeSort(array, 0 , Size-1);
    cout << "The array after sorting: ";
    for (int i = 0; i < Size; i++)
        cout << array[i] << " ";
    return 0;
}

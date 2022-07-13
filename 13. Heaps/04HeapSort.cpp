#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[1] = -1;
        size = 0;
    }
    void insert(int element)
    {
        size = size + 1;
        int index = size;
        arr[index] = element;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deletion()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        // Put last element into root element
        arr[1] = arr[size];
        size--;

        // Take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Min Heapify : Given a binary heap with one possible violation fix the heap
    void minHeapify(int i) // time comp. O(logn) ; space comp. O(logn)
    {
        // find smallest element of the three elements
        int lt = 2 * i + 1;
        int rt = 2 * i + 2;
        int smallest = i;

        if (lt < size and arr[lt] < arr[i])
        {
            smallest = lt;
        }
        if (rt < size and arr[rt] < arr[smallest])
        {
            smallest = rt;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);

            // recursive call
            minHeapify(smallest);
        }
    }

    void heapSort(int arr[], int n)
    {
        for (int i = n - 1; i > 1; i--)
        {
            swap(arr[1], arr[i]);
            minHeapify(i);
        }
    }
};
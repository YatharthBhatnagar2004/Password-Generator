#include <bits/stdc++.h>
using namespace std;
class minheap
{
    int *arr;
    int size;
    int capacity;

public:
    minheap(int c)
    {
        arr = new int[c];
        capacity = c;
        size = 0;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    void insert(int x)
    {
        if (size == capacity)
        {
            return;
        }
        size++;
        arr[size - 1] = x;
        // for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        // {
        //     swap(arr[i], arr[parent(i)]);
        //     i = parent(i);
        // }
    }
    void print()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
    }
    void heapify(int i)
    {
        int mn = i;
        int lf = left(i);
        int rt = right(i);
        if (lf < size && arr[lf] < arr[i])
        {
            mn = lf;
        }
        if (rt < size && arr[rt] < arr[mn])
        {
            mn = rt;
        }
        if (mn != i)
        {
            swap(arr[i], arr[mn]);
            heapify(mn);
        }
    }
    int extract()
    {
        if (size == 0)
        {
            return INT_MIN;
        }
        if (size == 1)
        {
            return arr[0];
        }
        swap(arr[0], arr[size - 1]);
        size--;
        heapify(0);
        return arr[size];
    }
    void decresekey(int x, int i)
    {
        arr[i] = x;
        for (; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void buildHeap()
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
        {
            heapify(i);
        }
    }
};
int main()
{
    minheap h(11);
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(45);
    h.insert(0);
    h.insert(9);
    h.insert(15);
    h.insert(14);
    h.insert(19);
    h.insert(11);
    h.print();
    cout << endl;
    // cout << h.extract();
    h.buildHeap();
    cout << endl;
    h.print();
    cout << endl;
    // h.decresekey(0, 10);
    h.print();
}
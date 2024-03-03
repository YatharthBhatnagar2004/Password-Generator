#include <bits/stdc++.h>
using namespace std;
struct dequeues
{
    int size, cap;
    int *arr;
    dequeues(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isfull()
    {
        return (size == cap);
    }
    bool isempty()
    {
        return size == 0;
    }
    void insertfront(int x)
    {
        if (isfull())
            return;
        for (int i = size - 1; i >= 0; --i)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }
    void deletefront()
    {
        if (isempty())
        {
            return;
        }
        for (int i = 0; i < size - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int getfront()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[0];
        }
    }
    int getrear()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[size - 1];
        }
    }
    void insertrear(int x)
    {
        if (size == cap)
        {
            return;
        }
        arr[size] = x;
        size++;
    }
    void deleterear()
    {
        if (isempty())
            return;
        size--;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    dequeues d(8);
    d.insertfront(1);
    // d.insertfront(0);
    d.insertrear(2);
    d.insertrear(3);
    d.print();
    cout << d.getfront();
    cout << d.getrear();
}
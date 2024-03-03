#include <bits/stdc++.h>
using namespace std;
struct queue
{
    int size, cap;
    int *arr;
    queue(int c)
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
    void enque(int x)
    {
        arr[size] = x;
        size++;
    }
    void deque()
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
            return 0;
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
            return size - 1;
        }
    }
};
struct node
{
    node *next;
    int data;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct queuell
{
    node *front, *rear;
    int size;
    queuell()
    {
        size=0;
        front = NULL;
        rear = NULL;
    }
    void enquell(int x)
    {
        node *temp = new node(x);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }
    void dequell(){
        if(front==NULL){
            return;
        }
        node *temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete temp;
        size--;
    }

};

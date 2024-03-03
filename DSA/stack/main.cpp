#include <bits/stdc++.h>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isempty()
    {
        return (top == -1);
    }
};
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct mystackll
{
    node *head;
    int sz;
    mystackll()
    {
        head = NULL;
        sz = 0;
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        int res = head->data;
        node *temp = head;
        head = head->next;
        delete temp;
        sz--;
        return res;
    }
    int peek()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        return head->data;
    }
    int size()
    {
        return sz;
    }
    bool is_empty()
    {
        return (head == NULL);
    }
};

int main()
{
    // node *head = new node(NULL);
    mystackll s;
    // mystack(5);
    // cout << s.pop() << endl;
    // cout << s.peek() << endl;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // s.push(6);
    // cout << s.pop() << endl;
    // cout << s.isempty() << endl;
    // cout << s.peek() << endl;
    // s.pop();
    // cout << s.size() << endl;
    s.push(3);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.is_empty() << endl;
}
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}
node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    head->prev = temp;
    temp->next = head;
    return temp;
}
void insertend(node *head, int x)
{
    node *temp = new node(x);
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
}
node *reverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *prev = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}
node *deletefront(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    node *temp = head->next;
    delete head;
    temp->prev = NULL;
    return temp;
}
node *deletetail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = NULL;
    delete temp;
    return head;
}
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->prev = temp1;
    head = insertbegin(head, 0);
    insertend(head, 40);
    // head = reverse(head);
    // head = deletefront(head);
    deletetail(head);
    print(head);
}
